/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rect.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel <gdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:12:41 by gdaniel           #+#    #+#             */
/*   Updated: 2019/02/27 20:13:18 by gdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECT_H
# define RECT_H
# include "vector.h"

typedef struct	s_irect
{
	t_ivector2d	start;
	int			width;
	int			height;
}				t_irect;

t_irect			*createirect(t_ivector2d start, int widht, int height);
t_irect			setirect(t_ivector2d start, int widht, int height);

#endif
