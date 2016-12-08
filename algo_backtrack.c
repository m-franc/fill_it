/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_backtrack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:42:16 by ajehanno          #+#    #+#             */
/*   Updated: 2016/12/08 16:32:18 by ajehanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		backtrack(t_place *p, int x, int y, int o)
{
	if (p->write == p->size)
		return (1);
	if (p->write != p->size && p->tab[y] == 0)
		return (0);
	y = 0;
	while (p->tab[y])
	{
		x = 0;
		while (p->tab[y][x])
		{
			if (p->tab[y][x] == '.')
			{
				if (under_backtrack(p, x, y, o) == 1)
					return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int		under_backtrack(t_place *p, int x, int y, int o)
{
	if (ft_can_write(o, x, y, p) == 1)
	{
		p->write++;
		if ((backtrack(p, 0, 0, o + 1)) == 1)
			return (1);
		else
		{
			ft_delete(o, x, y, p);
			p->write--;
		}
	}
	return (0);
}
