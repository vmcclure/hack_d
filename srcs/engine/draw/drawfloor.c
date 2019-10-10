/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawfloor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 19:59:45 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/14 20:46:31 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

void	drawcail(t_doom *doom, t_wall wa, int b)
{
	float		y;
	t_ivector2d	xi;
	t_rgba		color;
	t_ivector2d	eba;

	eba.y = b == 4 || b == 3;
	if (wa.p[eba.y ? 2 : 0].x > wa.p[eba.y ? 3 : 1].x)
		ft_swap((void**)&wa.p[eba.y ? 2 : 0], (void**)&wa.p[eba.y ? 3 : 1]);
	xi.x = wa.p[eba.y ? 2 : 0].x - 1;
	xi.y = 0;
	while (++xi.x < wa.p[b == 4 || b == 3 ? 3 : 1].x)
	{
		y = -1;
		eba.x = flerp(wa.p[eba.y ? 2 : 0].y, wa.p[eba.y ? 3 : 1].y,
		((float)1 / (wa.p[eba.y ? 3 : 1].x - wa.p[eba.y ? 2 : 0].x)) * xi.y);
		while (++y < eba.x)
		{
			color = wa.ceiltexture.pic[0][0];
			if (xi.x >= 0 && xi.x < 800 && y >= 0 && y < 800)
				doom->win->pixels[(int)xi.x + ((int)y * 800)] =
				((((((255 << 8) | color.red) << 8) |
				color.green) << 8) | color.blue);
		}
		xi.y++;
	}
}

void	drawfloor(t_doom *doom, t_wall wa, int b)
{
	float		y;
	t_ivector2d	xi;
	t_rgba		color;
	int			ba;

	ba = b == 3 || b == 1;
	if (wa.p[ba ? 0 : 2].x > wa.p[ba ? 1 : 3].x)
		ft_swap((void**)&wa.p[ba ? 0 : 2], (void**)&wa.p[ba ? 1 : 3]);
	xi.x = wa.p[ba ? 0 : 2].x - 1;
	xi.y = 0;
	while (++xi.x < wa.p[b == 3 || b == 1 ? 1 : 3].x)
	{
		y = flerp(wa.p[ba ? 0 : 2].y, wa.p[ba ? 1 : 3].y,
		((float)1 / (wa.p[ba ? 1 : 3].x - wa.p[ba ? 0 : 2].x)) * xi.y);
		while (y < 800)
		{
			color = wa.floortexure.pic[0][0];
			if (xi.x >= 0 && xi.x < 800 && y >= 0 && y < 800)
				doom->win->pixels[(int)xi.x + ((int)y * 800)] =
				((((((255 << 8) | color.red) << 8) |
				color.green) << 8) | color.blue);
			y++;
		}
		xi.y++;
	}
}
