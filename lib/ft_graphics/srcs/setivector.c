/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setivector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:02 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:15:03 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ivector	setivector(int x, int y, int z)
{
	t_ivector result;

	result.x = x;
	result.y = y;
	result.z = z;
	return (result);
}

void		setivectorptr(t_ivector *v1, int x, int y, int z)
{
	if (v1 == (void*)0)
		return ;
	v1->x = x;
	v1->y = y;
	v1->z = z;
}
