/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:07:55 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:08:29 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat.h"

t_mat4x4	matscaling(t_fvector size)
{
	t_mat4x4	scal;

	scal = initmat(0);
	scal.mat[0][0] = size.x;
	scal.mat[1][1] = size.y;
	scal.mat[2][2] = size.z;
	scal.mat[3][3] = 1;
	return (scal);
}

t_mat4x4	multipmattomat(t_mat4x4 mat1, t_mat4x4 mat2)
{
	t_mat4x4	mat;
	t_ivector2d	cord;

	cord.x = 0;
	while (cord.x < 4)
	{
		cord.y = 0;
		while (cord.y < 4)
		{
			mat.mat[cord.y][cord.x] = mat1.mat[cord.y][0] * mat2.mat[0][cord.x]
									+ mat1.mat[cord.y][1] * mat2.mat[1][cord.x]
									+ mat1.mat[cord.y][2] * mat2.mat[2][cord.x]
									+ mat1.mat[cord.y][3] * mat2.mat[3][cord.x];
			cord.y++;
		}
		cord.x++;
	}
	return (mat);
}

t_fvector	multipmatrix(t_fvector v, t_mat4x4 mat)
{
	t_fvector	f;

	f.x = (v.x * mat.mat[0][0]) + v.y * (mat.mat[1][0])
	+ (v.z * mat.mat[2][0]) + mat.mat[3][0];
	f.y = (v.x * mat.mat[0][1]) + (v.y * mat.mat[1][1])
	+ (v.z * mat.mat[2][1]) + mat.mat[3][1];
	f.z = (v.x * mat.mat[0][2]) + (v.y * mat.mat[1][2])
	+ (v.z * mat.mat[2][2]) + mat.mat[3][2];
	f.w = (v.x * mat.mat[0][3]) + (v.y * mat.mat[1][3])
	+ (v.z * mat.mat[2][3]) + mat.mat[3][3];
	return (f);
}

t_mat4x4	subsyspointat(t_fvector newfor, t_fvector newup, t_fvector newright)
{
	t_mat4x4	m;

	m.mat[0][0] = newright.x;
	m.mat[1][0] = newup.x;
	m.mat[2][0] = newfor.x;
	m.mat[3][0] = 0;
	m.mat[0][1] = newright.y;
	m.mat[1][1] = newup.y;
	m.mat[2][1] = newfor.y;
	m.mat[3][1] = 0;
	m.mat[0][2] = newright.z;
	m.mat[1][2] = newup.z;
	m.mat[2][2] = newfor.z;
	m.mat[3][2] = 0;
	m.mat[0][3] = 0;
	m.mat[1][3] = 0;
	m.mat[2][3] = 0;
	m.mat[3][3] = 1;
	return (m);
}

t_mat4x4	matpointat(t_fvector pos, t_fvector tartge, t_fvector up)
{
	float		dot;
	t_fvector	newright;
	t_fvector	a;
	t_fvector	newup;
	t_fvector	newfor;

	newfor = subfvtofv(tartge, pos);
	newfor = normfvector(newfor);
	dot = dotproductfvtofv(up, newfor);
	a = multfvector(newfor, dot, dot, dot);
	newup = subfvtofv(up, a);
	newup = normfvector(newup);
	newright = crossproductfvtofv(newup, newfor);
	newright = normfvector(newright);
	return (subsyspointat(newfor, newup, newright));
}
