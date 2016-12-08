/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_1_3+19.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:41:19 by ajehanno          #+#    #+#             */
/*   Updated: 2016/12/08 16:27:27 by ajehanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_del	g_d[] =
{
	ft_delete1, ft_delete2, ft_delete3,
	ft_delete4, ft_delete5, ft_delete6, ft_delete7,
	ft_delete8, ft_delete9, ft_delete10, ft_delete11,
	ft_delete12, ft_delete13, ft_delete14,
	ft_delete15, ft_delete16, ft_delete17,
	ft_delete18, ft_delete19
};

void	ft_delete(int o, int x, int y, t_place *p)
{
	int		id;

	id = p->ids[o];
	g_d[id - 1](x, y, p);
}

void	ft_delete1(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x + 1] = '.';
}

void	ft_delete2(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 2][x] = '.';
	p->tab[y + 3][x] = '.';
}

void	ft_delete3(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y][x + 2] = '.';
	p->tab[y][x + 3] = '.';
}

void	ft_delete19(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x + 1] = '.';
	p->tab[y + 2][x] = '.';
}
