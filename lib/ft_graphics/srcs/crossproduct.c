/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crossproduct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 20:57:50 by gdaniel           #+#    #+#             */
/*   Updated: 2019/03/21 20:58:38 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ivector		crossproductivtoiv(t_ivector v1, t_ivector v2)
{
	t_ivector	v;

	v.x = v1.y * v2.z - v1.z * v2.y;
	v.y = v1.z * v2.x - v1.x * v2.z;
	v.z = v1.x * v2.y - v1.y * v2.x;
	return (v);
}

t_fvector		crossproductfvtofv(t_fvector v1, t_fvector v2)
{
	t_fvector	v;

	v.x = v1.y * v2.z - v1.z * v2.y;
	v.y = v1.z * v2.x - v1.x * v2.z;
	v.z = v1.x * v2.y - v1.y * v2.x;
	return (v);
}

t_dvector		crossproductdvtodv(t_dvector v1, t_dvector v2)
{
	t_dvector	v;

	v.x = v1.y * v2.z - v1.z * v2.y;
	v.y = v1.z * v2.x - v1.x * v2.z;
	v.z = v1.x * v2.y - v1.y * v2.x;
	return (v);
}
