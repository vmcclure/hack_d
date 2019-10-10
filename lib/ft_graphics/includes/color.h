/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:13:23 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 17:14:04 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H
# include <stdlib.h>
# include <math.h>
# include "rotate.h"

typedef struct	s_rgb
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
}				t_rgb;

t_rgb			*creatergb(int red, int green, int blue);
t_rgb			setrgb(int red, int green, int blue);
void			setrgbptr(t_rgb *color, int red, int green, int blue);

t_rgb			addrgb(t_rgb color, int red, int green, int blue);
t_rgb			faddrgb(t_rgb color, float red, float green, float blue);
t_rgb			subrgb(t_rgb color, int red, int green, int blue);
t_rgb			fsubrgb(t_rgb color, float red, float green, float blue);
t_rgb			multrgb(t_rgb color, int red, int green, int blue);
t_rgb			fmultrgb(t_rgb color, float red, float green, float blue);
t_rgb			divrgb(t_rgb color, int red, int green, int blue);
t_rgb			fdivrgb(t_rgb color, float red, float green, float blue);

typedef struct	s_hsl
{
	int hue;
	int saturetion;
	int value;
}				t_hsl;

t_hsl			*createhsl(int hue, int saturetion, int value);
t_hsl			sethsl(int hue, int saturetion, int value);

t_rgb			hsltorgb(t_hsl hsl);

t_rgb			lerpcolor(t_rgb color1, t_rgb color2, float t);
t_rgb			dlerpcolor(t_rgb color1, t_rgb color2, double t);
t_rgb			*lerpcolorptr(t_rgb *color1, t_rgb *color2, float t);
t_rgb			*lerpcolornewptr(t_rgb *color1, t_rgb *color2, float t);

typedef struct	s_rgba
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
}				t_rgba;

t_rgba			setrgba(int alpha, int red, int green, int blue);
t_rgba			opacityrgba(t_rgba back, t_rgba front);

#endif
