/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cal_gen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:21:39 by jbelless          #+#    #+#             */
/*   Updated: 2016/05/31 17:29:15 by pboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

t_ray			*ft_calc_ray(int x, int y, t_env *e)
{
	t_ray *ray;

	if ((ray = (t_ray *)malloc(sizeof(t_ray))) == NULL)
		exit(-1);
	ray->dir.x = e->cam.pos.x + e->cam.dir.x * e->cam.distfo
		+ e->pix_zero.x + ((double)WIDTH / (double)SIZE_W) * x
		* e->cam.right.x - ((double)HIGHT / (double)SIZE_H) * y * e->cam.up.x;
	ray->dir.y = e->cam.pos.y + e->cam.dir.y * e->cam.distfo
		+ e->pix_zero.y + ((double)WIDTH / (double)SIZE_W) * x * e->cam.right.y
		- ((double)HIGHT / (double)SIZE_H) * y * e->cam.up.y;
	ray->dir.z = e->cam.pos.z + e->cam.dir.z * e->cam.distfo + e->pix_zero.z
		+ ((double)WIDTH / (double)SIZE_W) * x * e->cam.right.z
		- ((double)HIGHT / (double)SIZE_H) * y * e->cam.up.z;
	ft_normalise(&ray->dir);
	ray->pos.x = e->cam.pos.x;
	ray->pos.y = e->cam.pos.y;
	ray->pos.z = e->cam.pos.z;
	ray->iter = 0;
	ray->i_opt = 1;
	return (ray);
}

inline double	ft_dist_light(t_vec3 *ray_pos, t_light *light)
{
	return (sqrt(
				carre((light->pos.x + light->offset.x) - ray_pos->x) +
				carre((light->pos.y + light->offset.y) - ray_pos->y) +
				carre((light->pos.z + light->offset.z) - ray_pos->z)));
}

t_ray			*ft_recalc_ori(t_ray *ray, double t)
{
	t_ray	*res;

	res = (t_ray*)malloc(sizeof(t_ray));
	res->pos.x = ray->pos.x + ray->dir.x * t;
	res->pos.y = ray->pos.y + ray->dir.y * t;
	res->pos.z = ray->pos.z + ray->dir.z * t;
	res->dir.x = ray->dir.x;
	res->dir.y = ray->dir.y;
	res->dir.z = ray->dir.z;
	return (res);
}

void			ft_recalc_dir(t_light *light, t_ray *ray, t_vec3 *norm)
{
	if (light->dir.x == 0 && light->dir.y == 0 && light->dir.z == 0)
	{
		ray->dir.x = light->pos.x + light->offset.x - ray->pos.x;
		ray->dir.y = light->pos.y + light->offset.y - ray->pos.y;
		ray->dir.z = light->pos.z + light->offset.z - ray->pos.z;
	}
	else
	{
		ray->dir.x = -light->dir.x;
		ray->dir.y = -light->dir.y;
		ray->dir.z = -light->dir.z;
	}
	ray->pos.x = ray->pos.x + 0.01 * norm->x;
	ray->pos.y = ray->pos.y + 0.01 * norm->y;
	ray->pos.z = ray->pos.z + 0.01 * norm->z;
	ft_normalise(&(ray->dir));
}
