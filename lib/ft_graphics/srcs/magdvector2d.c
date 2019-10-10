/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magdvector2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:57:13 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/14 12:57:39 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

float		magdvector2d(t_dvector2d v1)
{
	return (sqrt(dotproductfv2dtodv2d(v1, v1)));
}
