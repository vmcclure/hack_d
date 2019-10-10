/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createirect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:16:29 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:16:30 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rect.h"

t_irect	*createirect(t_ivector2d start, int widht, int height)
{
	t_irect	*result;

	if (!(result = (t_irect*)malloc(sizeof(t_irect))))
		return ((void*)0);
	result->start = start;
	result->width = widht;
	result->height = height;
	return (result);
}
