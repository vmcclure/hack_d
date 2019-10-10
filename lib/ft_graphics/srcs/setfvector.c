/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setfvector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:14:50 by gdaniel           #+#    #+#             */
/*   Updated: 2019/04/15 11:11:56 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_fvector	setfvector(float x, float y, float z, float w)
{
	t_fvector result;

	result.x = x;
	result.y = y;
	result.z = z;
	result.w = w;
	return (result);
}

void		setfvectorptr(t_fvector *v1, float x, float y, float z)
{
	if (v1 == (void*)0)
		return ;
	v1->x = x;
	v1->y = y;
	v1->z = z;
}
