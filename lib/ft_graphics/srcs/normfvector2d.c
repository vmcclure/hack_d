/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normfvector2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:18 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:15:18 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_fvector2d	normfvector2d(t_fvector2d v1)
{
	float m;

	m = magfvector2d(v1);
	if (m != 0.0f)
		return (divfvector2d(v1, m, m));
	return (v1);
}
