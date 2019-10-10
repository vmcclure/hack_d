/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dotproduct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:09:38 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:10:18 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

float			dotproductivtoiv(t_ivector v1, t_ivector v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

float			dotproductiv2dtoiv2d(t_ivector2d v1, t_ivector2d v2)
{
	return (v1.x * v2.x + v1.y * v2.y);
}

float			dotproductfvtofv(t_fvector v1, t_fvector v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

float			dotproductfv2dtofv2d(t_fvector2d v1, t_fvector2d v2)
{
	return (v1.x * v2.x + v1.y * v2.y);
}
