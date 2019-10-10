/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 15:26:53 by srafe             #+#    #+#             */
/*   Updated: 2019/06/14 19:12:08 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/editor.h"

static char	*s_m_w(t_map *map)
{
	int		i;
	char	*str;
	char	*del;

	i = 0;
	str = "";
	str = save_w(map, i, str);
	while (++i < map->wall_count)
	{
		del = str;
		str = save_w(map, i, str);
		if ((i < map->wall_count - 1)
		&& (map->walls[i + 1].sector != map->walls[i].sector))
		{
			ft_strdel(&del);
			del = str;
			str = ft_strjoin(str, "\n");
		}
		ft_strdel(&del);
	}
	del = str;
	str = ft_strjoin(str, "\n");
	ft_strdel(&del);
	return (str);
}

static char	*s_m_s(t_map *map, char *str)
{
	char	*del;
	int		i;

	i = 0;
	while (i < map->sec_count)
	{
		str = save_s(map, i, str);
		i++;
	}
	del = str;
	str = ft_strjoin(str, "\n");
	ft_strdel(&del);
	return (str);
}

static char	*s_m_obj(t_map *map, char *str)
{
	char	*del;
	int		i;

	i = 0;
	while (i < map->obj_count)
	{
		str = save_obj(map, i, str);
		i++;
	}
	return (str);
}

void		save_map(t_map *map, t_serv *s)
{
	int		fd;
	char	*strassets;
	char	*sa;
	char	*path;
	char	*str;

	if (map->wall_count > 0)
	{
		str = s_m_w(map);
		str = s_m_s(map, str);
		str = save_p(map, str);
		str = s_m_obj(map, str);
		write(s->fd, str, sizeof(char) * ft_strlen(str));
		ft_strdel(&str);
	}
	path = ft_strjoin(s->prog_path, "assets/assets.cfg");
	strassets = file_read(fd, path);
	fd = open(path, O_CREAT | O_RDWR | O_TRUNC, S_IWRITE | S_IREAD);
	ft_strdel(&path);
	sa = ft_strjoin(strassets, "\n");
	path = ft_strjoin(sa, s->file);
	ft_strdel(&sa);
	write(fd, path, ft_strlen(path));
	ft_strdel(&path);
	close(fd);
}
