/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multivector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:33 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:15:33 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ivector	multivector(t_ivector v1, int x, int y, int z)
{
	v1.x *= x;
	v1.y *= y;
	v1.z *= z;
	return (v1);
}

t_ivector	multivtoiv(t_ivector v1, t_ivector v2)
{
	v1.x *= v2.x;
	v1.y *= v2.y;
	v1.z *= v2.z;
	return (v1);
}
