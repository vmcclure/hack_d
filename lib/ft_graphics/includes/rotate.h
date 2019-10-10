/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:12:29 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:12:57 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROTATE_H
# define ROTATE_H
# include "vector.h"

float	degrtorad(float deg);
float	radtodeg(float rad);

void	xrotate(t_fvector	*point, t_fvector *center, float angle);
void	yrotate(t_fvector	*point, t_fvector *center, float angle);
void	zrotate(t_fvector	*point, t_fvector *center, float angle);

#endif
