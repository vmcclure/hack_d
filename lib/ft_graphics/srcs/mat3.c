/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:09:03 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:09:19 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat.h"

t_mat4x4	matrotz(float angle)
{
	t_mat4x4	rot;

	rot = initmat(0);
	rot.mat[0][0] = cosf(angle);
	rot.mat[0][1] = -sinf(angle);
	rot.mat[1][0] = sinf(angle);
	rot.mat[1][1] = cosf(angle);
	rot.mat[2][2] = 1;
	rot.mat[3][3] = 1;
	return (rot);
}

t_mat4x4	matrotx(float angle)
{
	t_mat4x4	rot;

	rot = initmat(0);
	rot.mat[0][0] = 1;
	rot.mat[1][1] = cosf(angle);
	rot.mat[1][2] = -sinf(angle);
	rot.mat[2][1] = sinf(angle);
	rot.mat[2][2] = cosf(angle);
	rot.mat[3][3] = 1;
	return (rot);
}

t_mat4x4	matroty(float angle)
{
	t_mat4x4	rot;

	rot = initmat(0);
	rot.mat[0][0] = cosf(angle);
	rot.mat[0][2] = sinf(angle);
	rot.mat[1][1] = 1;
	rot.mat[2][0] = -sinf(angle);
	rot.mat[2][2] = cosf(angle);
	rot.mat[3][3] = 1;
	return (rot);
}
