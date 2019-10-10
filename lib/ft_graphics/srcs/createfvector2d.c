/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createfvector2d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:16:32 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:16:32 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_fvector2d	*createfvector2d(float x, float y)
{
	t_fvector2d *ptr;

	ptr = (void*)0;
	if (!(ptr == (t_fvector2d*)malloc(sizeof(t_fvector2d))))
		return (NULL);
	ptr->x = x;
	ptr->y = y;
	return (ptr);
}
