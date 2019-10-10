/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 14:06:13 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:11:41 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include "vector.h"

int			ilerp(int start, int end, float t);
int			ilerpd(int start, int end, double t);
float		flerp(float start, float end, float t);

t_fvector2d	ftriang(t_fvector2d p1, t_fvector2d p2,
t_fvector2d p3, t_fvector2d uv);
t_ivector2d	itriang(t_ivector2d p1, t_ivector2d p2, t_ivector2d p3,
t_fvector2d uv);
#endif
