/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opacityrgba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:30:56 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:04:04 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_rgba		opacityrgba(t_rgba back, t_rgba front)
{
	t_rgba	r;

	r.red = back.red + front.red * (1 - ((float)front.alpha / 255));
	r.green = back.green + front.green * (1 - ((float)front.alpha / 255));
	r.blue = back.blue + front.blue * (1 - ((float)front.alpha / 255));
	r.alpha = back.alpha + front.alpha * (1 - ((float)back.alpha / 255));
	return (r);
}
