/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 11:08:46 by jbelless          #+#    #+#             */
/*   Updated: 2016/06/07 11:25:23 by ebouther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

static void	ft_get_touched_obj(t_obj_col *tmp, t_obj **cur_obj, t_obj **obj_pix,
		t_tvn *tvn)
{
	if (tmp->t[0] < tvn->t && tmp->t[0] > 0)
	{
		tvn->t = tmp->t[0];
		tvn->vn = tmp->vn;
		if (obj_pix)
			*obj_pix = tmp->obj;
		*cur_obj = tmp->obj;
	}
	else if (tmp->t[1] < tvn->t && tmp->t[1] > 0)
	{
		tvn->t = tmp->t[1];
		tvn->vn = tmp->vn;
		if (obj_pix)
			*obj_pix = tmp->obj;
		*cur_obj = tmp->obj;
	}
	else
	{
		free(tmp->t);
		free(tmp);
	}
}

t_color		*ft_contact(t_ray *ray, t_env *e, t_obj **obj_pix)
{
	t_obj		*cur_obj;
	t_obj_col	*tmp;
	t_tvn		tvn;
	t_list		*lst;

	if (ray == NULL)
		return (NULL);
	tvn.t = FAR;
	lst = e->obj;
	while (lst)
	{
		tmp = ft_get_inters(lst->content, ray);
		ft_get_touched_obj(tmp, &cur_obj, obj_pix, &tvn);
		lst = lst->next;
	}
	if (tvn.t < FAR)
		return (ft_ishadow(e, ray, tvn, cur_obj));
	return (NULL);
}
