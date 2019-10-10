/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createivector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:16:27 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:16:27 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ivector	*createivector(int x, int y, int z)
{
	t_ivector *ptr;

	ptr = (void*)0;
	if (!(ptr == (t_ivector*)malloc(sizeof(t_ivector))))
		return (NULL);
	ptr->x = x;
	ptr->y = y;
	ptr->z = z;
	return (ptr);
}
