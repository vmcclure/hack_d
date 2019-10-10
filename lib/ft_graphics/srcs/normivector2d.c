/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normivector2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:11 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:15:11 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ivector2d	normivector2d(t_ivector2d v1)
{
	int m;

	m = magivector2d(v1);
	if (m != 0)
		return (divivector2d(v1, m, m));
	return (v1);
}
