/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createivector2d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:16:13 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:16:13 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ivector2d	*createivector2d(int x, int y)
{
	t_ivector2d *ptr;

	ptr = (void*)0;
	if (!(ptr == (t_ivector2d*)malloc(sizeof(t_ivector2d))))
		return (NULL);
	ptr->x = x;
	ptr->y = y;
	return (ptr);
}
