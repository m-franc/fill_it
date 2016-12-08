/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_14_18.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:41:08 by ajehanno          #+#    #+#             */
/*   Updated: 2016/12/08 12:41:12 by ajehanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_delete14(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x - 1] = '.';
}

void	ft_delete15(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x + 1] = '.';
	p->tab[y + 2][x + 1] = '.';
}

void	ft_delete16(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y + 1][x + 1] = '.';
	p->tab[y][x + 2] = '.';
}

void	ft_delete17(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x - 1] = '.';
	p->tab[y + 2][x] = '.';
}

void	ft_delete18(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x - 1] = '.';
	p->tab[y + 1][x + 1] = '.';
}
