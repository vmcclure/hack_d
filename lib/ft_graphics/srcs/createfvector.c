/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createfvector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:16:35 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:16:35 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_fvector	*createfvector(float x, float y, float z)
{
	t_fvector *ptr;

	ptr = (void*)0;
	if (!(ptr == (t_fvector*)malloc(sizeof(t_fvector))))
		return (NULL);
	ptr->x = x;
	ptr->y = y;
	ptr->z = z;
	return (ptr);
}
