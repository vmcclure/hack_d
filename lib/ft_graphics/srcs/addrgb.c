/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addrgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:18:25 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:18:25 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_rgb	addrgb(t_rgb color, int red, int green, int blue)
{
	color.red += red;
	color.green += green;
	color.blue += blue;
	return (color);
}

t_rgb	faddrgb(t_rgb color, float red, float green, float blue)
{
	color.red += red;
	color.green += green;
	color.blue += blue;
	return (color);
}
