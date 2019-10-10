/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divdvector2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:54:42 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/14 12:55:20 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_dvector2d	divdvector2d(t_dvector2d v1, double x, double y)
{
	v1.x /= x;
	v1.y /= y;
	return (v1);
}

t_dvector2d	divdv2dtodv2d(t_dvector2d v1, t_dvector2d v2)
{
	v1.x /= v2.x;
	v1.y /= v2.y;
	return (v1);
}
