/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createdvector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:51:53 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/14 13:09:54 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_dvector	*createdvector(double x, double y, double z)
{
	t_dvector *ptr;

	ptr = (void*)0;
	if (!(ptr == (t_dvector*)malloc(sizeof(t_dvector))))
		return (NULL);
	ptr->x = x;
	ptr->y = y;
	ptr->z = z;
	return (ptr);
}
