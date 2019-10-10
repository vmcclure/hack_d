/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divrgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:16:01 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:16:02 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_rgb	divrgb(t_rgb color, int red, int green, int blue)
{
	if (red != 0)
		color.red /= red;
	if (green != 0)
		color.green /= green;
	if (blue != 0)
		color.blue /= blue;
	return (color);
}

t_rgb	fdivrgb(t_rgb color, float red, float green, float blue)
{
	if (red != 0)
		color.red /= red;
	if (green != 0)
		color.green /= green;
	if (blue != 0)
		color.blue /= blue;
	return (color);
}
