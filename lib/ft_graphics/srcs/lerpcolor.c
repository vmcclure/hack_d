/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lerpcolor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:47 by gdaniel           #+#    #+#             */
/*   Updated: 2019/03/26 14:19:59 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "utils.h"

t_rgb	lerpcolor(t_rgb color1, t_rgb color2, float t)
{
	t_rgb result;

	result.red = ilerp(color1.red, color2.red, t);
	result.green = ilerp(color1.green, color2.green, t);
	result.blue = ilerp(color1.blue, color2.blue, t);
	return (result);
}

t_rgb	dlerpcolor(t_rgb color1, t_rgb color2, double t)
{
	t_rgb result;

	result.red = ilerpd(color1.red, color2.red, t);
	result.green = ilerpd(color1.green, color2.green, t);
	result.blue = ilerpd(color1.blue, color2.blue, t);
	return (result);
}

t_rgb	*lerpcolorptr(t_rgb *color1, t_rgb *color2, float t)
{
	color1->red = ilerp(color1->red, color2->red, t);
	color1->green = ilerp(color1->green, color2->green, t);
	color1->blue = ilerp(color1->blue, color2->blue, t);
	return (color1);
}

t_rgb	*lerpcolornewptr(t_rgb *color1, t_rgb *color2, float t)
{
	t_rgb result;

	result = lerpcolor(*color1, *color2, t);
	return (creatergb(result.red, result.green, result.blue));
}
