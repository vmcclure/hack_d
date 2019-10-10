/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sethsl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 18:08:55 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/11 18:50:20 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_hsl	sethsl(int hue, int saturetion, int value)
{
	t_hsl result;

	result.hue = hue;
	result.saturetion = saturetion;
	result.value = value;
	return (result);
}
