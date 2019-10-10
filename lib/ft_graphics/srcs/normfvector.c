/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normfvector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:21 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:15:21 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_fvector	normfvector(t_fvector v1)
{
	int m;

	m = magfvector(v1);
	if (m != 0)
		return (divfvector(v1, m, m, m));
	return (v1);
}
