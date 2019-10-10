/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divdvector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:53:50 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/14 13:06:02 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_dvector	divdvector(t_dvector v1, double x, double y, double z)
{
	v1.x /= x;
	v1.y /= y;
	v1.z /= z;
	return (v1);
}

t_dvector	divdvtodv(t_dvector v1, t_dvector v2)
{
	v1.x /= v2.x;
	v1.y /= v2.y;
	v1.z /= v2.z;
	return (v1);
}
