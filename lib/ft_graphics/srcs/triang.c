/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triang.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 14:09:39 by gdaniel           #+#    #+#             */
/*   Updated: 2019/03/26 14:15:21 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_fvector2d	ftriang(t_fvector2d p1, t_fvector2d p2,
t_fvector2d p3, t_fvector2d uv)
{
	t_fvector2d result;

	result.x = p1.x + uv.x * (p2.x - p1.x) + uv.y * (p3.x - p1.x);
	result.y = p1.y + uv.x * (p2.y - p1.y) + uv.y * (p3.y - p1.y);
	return (result);
}

t_ivector2d	itriang(t_ivector2d p1, t_ivector2d p2, t_ivector2d p3,
t_fvector2d uv)
{
	t_ivector2d result;

	result.x = p1.x + uv.x * (p2.x - p1.x) + uv.y * (p3.x - p1.x);
	result.y = p1.y + uv.x * (p2.y - p1.y) + uv.y * (p3.y - p1.y);
	return (result);
}
