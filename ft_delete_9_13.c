/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_9_13.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:41:38 by ajehanno          #+#    #+#             */
/*   Updated: 2016/12/08 12:41:41 by ajehanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_delete9(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 2][x] = '.';
	p->tab[y + 2][x + 1] = '.';
}

void	ft_delete10(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y][x + 2] = '.';
}

void	ft_delete11(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x + 1] = '.';
	p->tab[y + 1][x + 2] = '.';
}

void	ft_delete12(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y + 1][x + 1] = '.';
	p->tab[y + 1][x + 2] = '.';
}

void	ft_delete13(int x, int y, t_place *p)
{
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x - 1] = '.';
	p->tab[y + 2][x - 1] = '.';
}
