/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creatergb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:16:24 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:16:24 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_rgb	*creatergb(int red, int green, int blue)
{
	t_rgb	*ptr;

	ptr = (void*)0;
	if (!(ptr == (t_rgb*)malloc(sizeof(t_rgb))))
		return ((void*)0);
	ptr->red = red;
	ptr->green = green;
	ptr->blue = blue;
	return (ptr);
}
