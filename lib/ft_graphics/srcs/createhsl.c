/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createhsl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 18:06:13 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/11 18:49:58 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_hsl	*createhsl(int hue, int saturetion, int value)
{
	t_hsl	*hsl;

	if (!(hsl = (t_hsl*)malloc(sizeof(t_hsl))))
		return ((void*)0);
	hsl->hue = hue;
	hsl->saturetion = saturetion;
	hsl->value = value;
	return (hsl);
}
