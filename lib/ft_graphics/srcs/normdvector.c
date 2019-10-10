/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normdvector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:59:40 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/14 13:06:22 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_dvector	normdvector(t_dvector v1)
{
	int m;

	m = magdvector(v1);
	if (m != 0)
		return (divdvector(v1, m, m, m));
	return (v1);
}
