/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:11:10 by gdaniel           #+#    #+#             */
/*   Updated: 2019/04/15 11:11:41 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include <stdlib.h>
# include <math.h>

typedef struct	s_ivector
{
	int x;
	int y;
	int z;
}				t_ivector;

t_ivector		*createivector(int x, int y, int z);
t_ivector		setivector(int x, int y, int z);
void			setivectorptr(t_ivector *v1, int x, int y, int z);

t_ivector		addivector(t_ivector v1, int x, int y, int z);
t_ivector		addivtoiv(t_ivector v1, t_ivector v2);
t_ivector		subivector(t_ivector v1, int x, int y, int z);
t_ivector		subivtoiv(t_ivector v1, t_ivector v2);
t_ivector		multivector(t_ivector v1, int x, int y, int z);
t_ivector		multivtoiv(t_ivector v1, t_ivector v2);
t_ivector		divivector(t_ivector v1, int x, int y, int z);
t_ivector		divivtoiv(t_ivector v1, t_ivector v2);
float			magivector(t_ivector v1);
t_ivector		normivector(t_ivector v1);
float			dotproductivtoiv(t_ivector v1, t_ivector v2);
t_ivector		crossproductivtoiv(t_ivector v1, t_ivector v2);

typedef struct	s_ivector2d
{
	int x;
	int y;
}				t_ivector2d;

t_ivector2d		*createivector2d(int x, int y);
t_ivector2d		setivector2d(int x, int y);
void			setivector2dptr(t_ivector2d *v1, int x, int y);
t_ivector		convertiv2dtoiv(t_ivector2d vec, int z);

t_ivector2d		addivector2d(t_ivector2d v1, int x, int y);
t_ivector2d		addiv2dtoiv2d(t_ivector2d v1, t_ivector2d v2);
t_ivector2d		subivector2d(t_ivector2d v1, int x, int y);
t_ivector2d		subiv2dtoiv2d(t_ivector2d v1, t_ivector2d v2);
t_ivector2d		multivector2d(t_ivector2d v1, int x, int y);
t_ivector2d		multiv2dtoiv2d(t_ivector2d v1, t_ivector2d v2);
t_ivector2d		divivector2d(t_ivector2d v1, int x, int y);
t_ivector2d		diviv2dtoiv2d(t_ivector2d v1, t_ivector2d v2);
float			magivector2d(t_ivector2d v1);
t_ivector2d		normivector2d(t_ivector2d v1);
float			dotproductiv2dtoiv2d(t_ivector2d v1, t_ivector2d v2);

typedef struct	s_fvector
{
	float x;
	float y;
	float z;
	float w;
}				t_fvector;

t_fvector		*createfvector(float x, float y, float z);
t_fvector		setfvector(float x, float y, float z, float w);
void			setfvectorptr(t_fvector *v1, float x, float y, float z);

t_fvector		addfvector(t_fvector v1, float x, float y, float z);
t_fvector		addfvtofv(t_fvector v1, t_fvector v2);
t_fvector		subfvector(t_fvector v1, float x, float y, float z);
t_fvector		subfvtofv(t_fvector v1, t_fvector v2);
t_fvector		multfvector(t_fvector v1, float x, float y, float z);
t_fvector		multfvtofv(t_fvector v1, t_fvector v2);
t_fvector		divfvector(t_fvector v1, float x, float y, float z);
t_fvector		divfvtofv(t_fvector v1, t_fvector v2);
float			magfvector(t_fvector v1);
t_fvector		normfvector(t_fvector v1);
float			dotproductfvtofv(t_fvector v1, t_fvector v2);
t_fvector		crossproductfvtofv(t_fvector v1, t_fvector v2);

typedef struct	s_fvector2d
{
	float x;
	float y;
}				t_fvector2d;

t_fvector2d		*createfvector2d(float x, float y);
t_fvector2d		setfvector2d(float x, float y);
void			setfvector2dptr(t_fvector2d *v1, float x, float y);
t_fvector		convertfv2dtofv(t_fvector2d vec, float z);

t_fvector2d		addfvector2d(t_fvector2d v1, float x, float y);
t_fvector2d		addfv2dtofv2d(t_fvector2d v1, t_fvector2d v2);
t_fvector2d		subfvector2d(t_fvector2d v1, float x, float y);
t_fvector2d		subfv2dtofv2d(t_fvector2d v1, t_fvector2d v2);
t_fvector2d		multfvector2d(t_fvector2d v1, float x, float y);
t_fvector2d		multfv2dtofv2d(t_fvector2d v1, t_fvector2d v2);
t_fvector2d		divfvector2d(t_fvector2d v1, float x, float y);
t_fvector2d		divfv2dtofv2d(t_fvector2d v1, t_fvector2d v2);
float			magfvector2d(t_fvector2d v1);
t_fvector2d		normfvector2d(t_fvector2d v1);
float			dotproductfv2dtofv2d(t_fvector2d v1, t_fvector2d v2);

typedef struct	s_dvector
{
	double x;
	double y;
	double z;
}				t_dvector;

t_dvector		*createdvector(double x, double y, double z);
t_dvector		setdvector(double x, double y, double z);
void			setdvectorptr(t_dvector *v1, double x, double y, double z);

t_dvector		adddvector(t_dvector v1, double x, double y, double z);
t_dvector		adddvtofv(t_dvector v1, t_dvector v2);
t_dvector		subdvector(t_dvector v1, double x, double y, double z);
t_dvector		subdvtodv(t_dvector v1, t_dvector v2);
t_dvector		multdvector(t_dvector v1, double x, double y, double z);
t_dvector		multdvtodv(t_dvector v1, t_dvector v2);
t_dvector		divdvector(t_dvector v1, double x, double y, double z);
t_dvector		divdvtodv(t_dvector v1, t_dvector v2);
float			magdvector(t_dvector v1);
t_dvector		normdvector(t_dvector v1);
float			dotproductdvtodv(t_dvector v1, t_dvector v2);
t_dvector		crossproductdvtodv(t_dvector v1, t_dvector v2);

typedef struct	s_dvector2d
{
	double x;
	double y;
}				t_dvector2d;

t_dvector2d		*createdvector2d(double x, double y);
t_dvector2d		setdvector2d(double x, double y);
void			setdvector2dptr(t_dvector2d *v1, double x, double y);
t_dvector		convertdv2dtodv(t_dvector2d vec, double z);

t_dvector2d		adddvector2d(t_dvector2d v1, double x, double y);
t_dvector2d		adddv2dtodv2d(t_dvector2d v1, t_dvector2d v2);
t_dvector2d		subdvector2d(t_dvector2d v1, double x, double y);
t_dvector2d		subdv2dtodv2d(t_dvector2d v1, t_dvector2d v2);
t_dvector2d		multdvector2d(t_dvector2d v1, double x, double y);
t_dvector2d		multdv2dtodv2d(t_dvector2d v1, t_dvector2d v2);
t_dvector2d		divdvector2d(t_dvector2d v1, double x, double y);
t_dvector2d		divdv2dtodv2d(t_dvector2d v1, t_dvector2d v2);
float			magdvector2d(t_dvector2d v1);
t_dvector2d		normdvector2d(t_dvector2d v1);
float			dotproductfv2dtodv2d(t_dvector2d v1, t_dvector2d v2);

#endif
