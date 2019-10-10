/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dotproduct2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:10:02 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:10:21 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

float			dotproductdvtodv(t_dvector v1, t_dvector v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

float			dotproductfv2dtodv2d(t_dvector2d v1, t_dvector2d v2)
{
	return (v1.x * v2.x + v1.y * v2.y);
}
