/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subfvector2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:14:34 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:14:34 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_fvector2d	subfvector2d(t_fvector2d v1, float x, float y)
{
	v1.x -= x;
	v1.y -= y;
	return (v1);
}

t_fvector2d	subfv2dtofv2d(t_fvector2d v1, t_fvector2d v2)
{
	v1.x -= v2.x;
	v1.y -= v2.y;
	return (v1);
}
