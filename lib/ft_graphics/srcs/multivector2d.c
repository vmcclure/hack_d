/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multivector2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:26 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:15:27 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ivector2d	multivector2d(t_ivector2d v1, int x, int y)
{
	v1.x *= x;
	v1.y *= y;
	return (v1);
}

t_ivector2d	multiv2dtoiv2d(t_ivector2d v1, t_ivector2d v2)
{
	v1.x *= v2.x;
	v1.y *= v2.y;
	return (v1);
}
