/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normdvector2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:00:07 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/14 13:00:40 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_dvector2d	normdvector2d(t_dvector2d v1)
{
	double m;

	m = magdvector2d(v1);
	if (m != 0.0f)
		return (divdvector2d(v1, m, m));
	return (v1);
}
