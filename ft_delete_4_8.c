#include "fillit.h"

void	ft_delete4(int x, int y, t_place *p)
{
/*	if (x + 1 >= p->max || y + 1 >= p->max || y + 2 >= p->max)
		return (0);
	if (p->tab[y][x + 1] != '.' 
			|| p->tab[y + 1][x + 1] != '.' 
			|| p->tab[y + 2][x + 1] != '.')
		return (0);*/
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y + 1][x + 1] = '.';
	p->tab[y + 2][x + 1] = '.';
}

void	ft_delete5(int x, int y, t_place *p)
{
/*	if (x + 1 >= p->max || y + 1 >= p->max || y + 2 >= p->max)
		return (0);
	if (p->tab[y][x + 1] != '.' 
			|| p->tab[y + 1][x] != '.' 
			|| p->tab[y + 2][x] != '.')
		return (0);*/
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 2][x] = '.';
}

void	ft_delete6(int x, int y, t_place *p)
{
/*	if (y - 1 < 0 || x - 1 < 0 || x - 2 < 0)
		return (0);
	if (p->tab[y - 1][x] != '.' 
			|| p->tab[y - 1][x - 1] != '.' 
			|| p->tab[y - 1][x - 2] != '.')
		return (0);*/
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x - 1] = '.';
	p->tab[y + 1][x - 2] = '.';
}

void	ft_delete7(int x, int y, t_place *p)
{
/*	if (y - 1 < 0 || x + 2 >= p->max || x + 1 >= p->max)
		return (0);
	if (p->tab[y][x + 1] != '.' 
			|| p->tab[y][x + 2] != '.' 
			|| p->tab[y - 1][x + 2] != '.')
		return (0);*/
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y][x + 2] = '.';
	p->tab[y + 1][x + 2] = '.';
}

void	ft_delete8(int x, int y, t_place *p)
{
/*	if (y - 1 < 0 || y - 2 < 0 || x - 1 < 0)
		return (0);
	if (p->tab[y - 1][x] != '.' 
			|| p->tab[y - 2][x] != '.' 
			|| p->tab[y - 2][x - 1] != '.')
		return (0);*/
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 2][x] = '.';
	p->tab[y + 2][x - 1] = '.';
}