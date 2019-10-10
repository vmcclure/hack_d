/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 18:35:59 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:09:15 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat.h"

t_mat4x4	initmat(float i)
{
	t_ivector2d	cord;
	t_mat4x4	mat;

	cord.y = 0;
	while (cord.y < 4)
	{
		cord.x = 0;
		while (cord.x < 4)
		{
			mat.mat[cord.y][cord.x] = i;
			cord.x++;
		}
		cord.y++;
	}
	return (mat);
}

t_mat4x4	mattranslate(float x, float y, float z)
{
	t_mat4x4 m;

	m = initmat(0);
	m.mat[0][0] = 1;
	m.mat[1][1] = 1;
	m.mat[2][2] = 1;
	m.mat[3][3] = 1;
	m.mat[3][0] = x;
	m.mat[3][1] = y;
	m.mat[3][2] = z;
	return (m);
}

t_mat4x4	matinverse(t_mat4x4 m)
{
	int			y;
	t_mat4x4	mr;

	mr = initmat(0);
	y = 0;
	while (y < 3)
	{
		mr.mat[0][y] = m.mat[y][0];
		mr.mat[1][y] = m.mat[y][1];
		mr.mat[2][y] = m.mat[y][2];
		y++;
	}
	mr.mat[3][0] = -(m.mat[3][0] * mr.mat[0][0] + m.mat[3][1]
	* mr.mat[1][0] + m.mat[3][2] * mr.mat[2][0]);
	mr.mat[3][1] = -(m.mat[3][0] * mr.mat[0][1] + m.mat[3][1]
	* mr.mat[1][1] + m.mat[3][2] * mr.mat[2][1]);
	mr.mat[3][2] = -(m.mat[3][0] * mr.mat[0][2] + m.mat[3][1]
	* mr.mat[1][2] + m.mat[3][2] * mr.mat[2][2]);
	mr.mat[3][3] = 1;
	return (m);
}
