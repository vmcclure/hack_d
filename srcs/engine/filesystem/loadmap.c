/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 14:45:18 by gdaniel           #+#    #+#             */
/*   Updated: 2019/06/13 19:08:24 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

void	initwall(char *str, t_fvector **wall, int y)
{
	char		**tmp;
	char		**tmp2;

	tmp = ft_strsplit(str, ' ');
	tmp2 = ft_strsplit(tmp[1], ',');
	(*wall)[y].x = ft_atoi(tmp2[0]);
	(*wall)[y].y = ft_atoi(tmp2[1]);
	(*wall)[y].z = ft_atoi(tmp2[2]);
	(*wall)[y].w = tmp2[3] != NULL ? ft_atoi(tmp2[3]) : 0;
	free2dstring(tmp);
	free2dstring(tmp2);
}

void	loadwall(char **str, t_fvector **wall, size_t *count)
{
	t_ivector2d	cord;

	cord = setivector2d(-1, 0);
	while (str[++cord.x] != NULL)
		if (str[cord.x][0] == 'w' && str[cord.x][1] == ':')
			cord.y++;
	*wall = (t_fvector*)malloc(sizeof(t_fvector) * (cord.y + 1));
	cord = setivector2d(-1, 0);
	while (str[++cord.x] != NULL)
	{
		if (str[cord.x][0] == 'w' && str[cord.x][1] == ':')
		{
			initwall(str[cord.x], wall, cord.y);
			cord.y++;
		}
	}
	(*count) = cord.y;
}

void	initplayer(char *str, t_player *player)
{
	char	**tmp;
	char	**tmp2;

	tmp = ft_strsplit(str, ' ');
	tmp2 = ft_strsplit(tmp[1], ',');
	player->pos = setfvector(ft_atof(tmp2[0]), 0, ft_atof(tmp2[1]), 0);
	free2dstring(tmp2);
	tmp2 = ft_strsplit(tmp[2], ',');
	player->rotate = setfvector(ft_atof(tmp2[0]), ft_atof(tmp2[1]),
	ft_atof(tmp2[2]), 0);
	free2dstring(tmp2);
	free2dstring(tmp);
}

void	loadplayer(char **str, t_player *player)
{
	int		y;
	int		flag;

	y = 0;
	flag = 0;
	while (str[y] != NULL)
	{
		if (str[y][0] == 'p' && str[y][1] == ':')
		{
			if (!flag)
				flag = 1;
			else
				error("Error: player");
			initplayer(str[y], player);
		}
		y++;
	}
}

t_map	loadmap(char *path)
{
	t_map	r;
	char	*str;
	char	**tmp;

	str = readfile(path);
	tmp = ft_strsplit(str, '\n');
	ft_strdel(&str);
	loadwall(tmp, &r.walls, &r.wallcount);
	loadsector(tmp, &r.sectors, &r.sectorcount);
	loadplayer(tmp, &r.startplayer);
	loadobj(tmp, &r.obj, &r.objcount);
	free2dstring(tmp);
	return (r);
}
