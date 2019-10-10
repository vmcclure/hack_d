/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colorconvert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 18:09:55 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:18:07 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_rgb	hsltorgb(t_hsl hsl)
{
	t_rgb		result;
	t_fvector	v;
	float		h;
	float		a;

	h = fmod(hsl.hue / 60, 6);
	v.x = ((100 - hsl.saturetion) * hsl.value) / 100;
	a = (hsl.value - v.x) * (fmod(hsl.hue, 60) / 30);
	v.y = v.x + a;
	v.z = hsl.value - a;
	if (h == 0)
		result = setrgb(hsl.value, v.y, v.x);
	else if (h == 1)
		result = setrgb(v.z, hsl.value, v.x);
	else if (h == 2)
		result = setrgb(v.x, hsl.value, v.y);
	else if (h == 3)
		result = setrgb(v.x, v.z, hsl.value);
	else if (h == 4)
		result = setrgb(v.y, v.x, hsl.value);
	else
		result = setrgb(hsl.value, v.x, v.z);
	result = fmultrgb(result, 2.55f, 2.55f, 2.55f);
	return (result);
}
