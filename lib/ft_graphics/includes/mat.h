/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:10:58 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:11:03 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT_H
# define MAT_H
# include "vector.h"

typedef struct	s_mat4x4
{
	float	mat[4][4];
}				t_mat4x4;
t_mat4x4		initmat(float i);
t_mat4x4		matscaling(t_fvector size);
t_mat4x4		mattranslate(float x, float y, float z);
t_mat4x4		matrotx(float angle);
t_mat4x4		matroty(float angle);
t_mat4x4		matrotz(float angle);
t_fvector		multipmatrix(t_fvector v, t_mat4x4 mat);
t_mat4x4		multipmattomat(t_mat4x4 mat1, t_mat4x4 mat2);
t_mat4x4		matpointat(t_fvector pos, t_fvector tartge, t_fvector up);
t_mat4x4		matinverse(t_mat4x4 m);

#endif
