/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subrgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:14:20 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:14:20 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_rgb	subrgb(t_rgb color, int red, int green, int blue)
{
	color.red -= red;
	color.green -= green;
	color.blue -= blue;
	return (color);
}

t_rgb	fsubrgb(t_rgb color, float red, float green, float blue)
{
	color.red -= red;
	color.green -= green;
	color.blue -= blue;
	return (color);
}
