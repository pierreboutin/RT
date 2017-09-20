/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ref.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascholle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 15:43:31 by ascholle          #+#    #+#             */
/*   Updated: 2016/05/27 12:04:04 by ebouther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

static t_ray	*ft_calc_new_ray(double calc, double n,
					t_work *work, t_ray *ray)
{
	t_ray	*res;

	if ((res = (t_ray*)malloc(sizeof(t_ray))) == NULL)
		exit(-1);
	res->dir.x = n * ray->dir.x - calc * work->normal->x;
	res->dir.y = n * ray->dir.y - calc * work->normal->y;
	res->dir.z = n * ray->dir.z - calc * work->normal->z;
	ft_normalise(&res->dir);
	res->pos.x = work->ray->pos.x - 1 * work->normal->x;
	res->pos.y = work->ray->pos.y - 1 * work->normal->y;
	res->pos.z = work->ray->pos.z - 1 * work->normal->z;
	res->i_opt = work->obj->mat.i_opt;
	res->iter = ray->iter + 1;
	return (res);
}

t_ray			*ft_refr(t_ray *ray, t_work *work, double *refl)
{
	double	n;
	double	p;
	double	calc;

	p = scal(ray->dir, *work->normal);
	n = ray->i_opt / work->obj->mat.i_opt;
	calc = 1 - carre(n) * (1 - carre(p));
	if (1 / carre(n) + carre(p) - 1 < 0)
	{
		*refl = work->obj->mat.refr;
		return (NULL);
	}
	*refl = 0;
	calc = n * p + sqrt(calc);
	return (ft_calc_new_ray(calc, n, work, ray));
}

t_ray			*ft_refl(t_ray *ray, t_work *work)
{
	t_ray	*res;
	double	p;

	if ((res = (t_ray*)malloc(sizeof(t_ray))) == NULL)
		exit(-1);
	p = work->normal->x * -ray->dir.x + work->normal->y
		* -ray->dir.y + work->normal->z * -ray->dir.z;
	res->dir.x = ray->dir.x + 2 * work->normal->x * p;
	res->dir.y = ray->dir.y + 2 * work->normal->y * p;
	res->dir.z = ray->dir.z + 2 * work->normal->z * p;
	ft_normalise(&ray->dir);
	res->pos.x = work->ray->pos.x + 0.01 * work->normal->x;
	res->pos.y = work->ray->pos.y + 0.01 * work->normal->y;
	res->pos.z = work->ray->pos.z + 0.01 * work->normal->z;
	res->i_opt = ray->i_opt;
	res->iter = ray->iter + 1;
	return (res);
}
