/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setirect.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:14:40 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:14:40 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rect.h"

t_irect	setirect(t_ivector2d start, int widht, int height)
{
	t_irect	result;

	result.start = start;
	result.width = widht;
	result.height = height;
	return (result);
}
