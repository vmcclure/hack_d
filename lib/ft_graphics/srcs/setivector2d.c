/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setivector2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:14:43 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:14:43 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ivector2d	setivector2d(int x, int y)
{
	t_ivector2d result;

	result.x = x;
	result.y = y;
	return (result);
}

void		setivector2dptr(t_ivector2d *v1, int x, int y)
{
	if (v1 == (void*)0)
		return ;
	v1->x = x;
	v1->y = y;
}

t_ivector	convertiv2dtoiv(t_ivector2d vec, int z)
{
	t_ivector result;

	result.x = vec.x;
	result.y = vec.y;
	result.z = z;
	return (result);
}
