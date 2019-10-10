/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setdvector2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:02:02 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/14 13:02:44 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_dvector2d	setdvector2d(double x, double y)
{
	t_dvector2d result;

	result.x = x;
	result.y = y;
	return (result);
}

void		setdvector2dptr(t_dvector2d *v1, double x, double y)
{
	if (v1 == (void*)0)
		return ;
	v1->x = x;
	v1->y = y;
}

t_dvector	convertdv2dtodv(t_dvector2d vec, double z)
{
	t_dvector result;

	result.x = vec.x;
	result.y = vec.y;
	result.z = z;
	return (result);
}
