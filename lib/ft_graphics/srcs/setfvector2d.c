/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setfvector2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:05 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:15:05 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_fvector2d	setfvector2d(float x, float y)
{
	t_fvector2d result;

	result.x = x;
	result.y = y;
	return (result);
}

void		setfvector2dptr(t_fvector2d *v1, float x, float y)
{
	if (v1 == (void*)0)
		return ;
	v1->x = x;
	v1->y = y;
}

t_fvector	convertfv2dtofv(t_fvector2d vec, float z)
{
	t_fvector result;

	result.x = vec.x;
	result.y = vec.y;
	result.z = z;
	return (result);
}
