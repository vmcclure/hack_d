/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setrgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:14:37 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:14:37 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_rgb	setrgb(int red, int green, int blue)
{
	t_rgb	result;

	result.red = red;
	result.green = green;
	result.blue = blue;
	return (result);
}

void	setrgbptr(t_rgb *color, int red, int green, int blue)
{
	if (color == (void*)0)
		return ;
	color->red = red;
	color->green = green;
	color->blue = blue;
}
