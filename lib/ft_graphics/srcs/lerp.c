/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lerp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:59 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:15:59 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rotate.h"

int		ilerp(int start, int end, float t)
{
	return (start + t * (end - start));
}

int		ilerpd(int start, int end, double t)
{
	return (start + t * (end - start));
}

float	flerp(float start, float end, float t)
{
	return (start + t * (end - start));
}
