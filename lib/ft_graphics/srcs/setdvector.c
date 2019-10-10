/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setdvector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:01:17 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/14 13:05:22 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_dvector	setdvector(double x, double y, double z)
{
	t_dvector result;

	result.x = x;
	result.y = y;
	result.z = z;
	return (result);
}

void		setdvectorptr(t_dvector *v1, double x, double y, double z)
{
	if (v1 == (void*)0)
		return ;
	v1->x = x;
	v1->y = y;
	v1->z = z;
}
