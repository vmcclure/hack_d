/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setrgba.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:28:47 by gdaniel           #+#    #+#             */
/*   Updated: 2019/04/22 12:29:28 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_rgba		setrgba(int alpha, int red, int green, int blue)
{
	t_rgba	r;

	r.alpha = alpha;
	r.red = red;
	r.green = green;
	r.blue = blue;
	return (r);
}
