#include "fillit.h"

void ft_delete(int o, int x,  int y, t_place *p)
{
	int	id;

	id = p->ids[o];

	D * d[] = {ft_delete1, ft_delete2, ft_delete3,
		ft_delete4, ft_delete5, ft_delete6, ft_delete7,
		ft_delete8, ft_delete9, ft_delete10, ft_delete11,
		ft_delete12, ft_delete13, ft_delete14, 
		ft_delete15, ft_delete16, ft_delete17, 
		ft_delete18, ft_delete19};
	d[id - 1](x, y, p);
}

void	ft_delete1(int x, int y, t_place *p)
{
/*	if (x + 1 >= p->max || y + 1 >= p->max)
		return (0);
	if (p->tab[y][x + 1] != '.' 
			|| p->tab[y + 1][x] != '.' 
			|| p->tab[y + 1][x + 1] != '.')
		return (0);*/
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x + 1] = '.';
}

void	ft_delete2(int x, int y, t_place *p)
{
/*	if (y + 1 >= p->max || y + 2 >= p->max || y + 3 >= p->max)
		return (0);
	if (p->tab[y + 1][x] != '.' 
			|| p->tab[y + 2][x] != '.' 
			|| p->tab[y + 3][x] != '.')
		return (0);*/
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 2][x] = '.';
	p->tab[y + 3][x] = '.';
}

void	ft_delete3(int x, int y, t_place *p)
{
/*	if (x + 1 >= p->max || x + 2 >= p->max || x + 3 >= p->max)
		return (0);
	if (p->tab[y][x + 1] != '.' 
			|| p->tab[y][x + 2] != '.' 
			|| p->tab[y][x + 3] != '.')
		return (0);*/
	p->tab[y][x] = '.';
	p->tab[y][x + 1] = '.';
	p->tab[y][x + 2] = '.';
	p->tab[y][x + 3] = '.';
}

void	ft_delete19(int x, int y, t_place *p)
{
/*	if (y + 1 >= p->max || y + 2 >= p->max || x + 1 >= p->max)
		return (0);
	if (p->tab[y + 1][x] != '.' 
			|| p->tab[y + 1][x + 1] != '.' 
			|| p->tab[y + 2][x] != '.')
		return (0);*/
	p->tab[y][x] = '.';
	p->tab[y + 1][x] = '.';
	p->tab[y + 1][x + 1] = '.';
	p->tab[y + 2][x] = '.';
}
