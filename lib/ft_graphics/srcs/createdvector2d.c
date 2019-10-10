/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createdvector2d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:52:59 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/14 13:10:00 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_dvector2d	*createdvector2d(double x, double y)
{
	t_dvector2d *ptr;

	ptr = (void*)0;
	if (!(ptr == (t_dvector2d*)malloc(sizeof(t_dvector2d))))
		return (NULL);
	ptr->x = x;
	ptr->y = y;
	return (ptr);
}
