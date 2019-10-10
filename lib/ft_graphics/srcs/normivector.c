/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normivector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:15:13 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:15:14 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ivector	normivector(t_ivector v1)
{
	int m;

	m = magivector(v1);
	if (m != 0)
		return (divivector(v1, m, m, m));
	return (v1);
}
