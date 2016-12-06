#include "fillit.h"

int	ft_can_write14(int o, int x, int y, t_place *p)
{
	if (x + 1 >= p->max || y - 1 < 0 || x - 1 < 0)
		return (0);
	if (p->tab[y][x + 1] != '.' 
			|| p->tab[y - 1][x] != '.' 
			|| p->tab[y - 1][x - 1] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y][x + 1] = 'A' + o;
	p->tab[y - 1][x] = 'A' + o;
	p->tab[y - 1][x - 1] = 'A' + o;
	return (1);
}

int	ft_can_write15(int o, int x, int y, t_place *p)
{
	if (y - 1 < 0 || y - 2 < 0 || x >= p->max)
		return (0);
	if (p->tab[y - 1][x] != '.' 
			|| p->tab[y - 1][x + 1] != '.' 
			|| p->tab[y - 2][x + 1] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y - 1][x] = 'A' + o;
	p->tab[y - 1][x + 1] = 'A' + o;
	p->tab[y - 2][x + 1] = 'A' + o;
	return (1);
}

int	ft_can_write16(int o, int x, int y, t_place *p)
{
	if (x + 1 >= p->max || y - 1 < 0 || x + 2 >= p->max)
		return (0);
	if (p->tab[y][x + 1] != '.' 
			|| p->tab[y - 1][x + 1] != '.' 
			|| p->tab[y][x + 2] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y][x + 1] = 'A' + o;
	p->tab[y - 1][x + 1] = 'A' + o;
	p->tab[y][x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write17(int o, int x, int y, t_place *p)
{
	if (y - 1 < 0 || y - 2 < 0 || x - 1 < 0)
		return (0);
	if (p->tab[y - 1][x] != '.' 
			|| p->tab[y - 1][x - 1] != '.' 
			|| p->tab[y - 2][x] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y - 1][x] = 'A' + o;
	p->tab[y - 1][x - 1] = 'A' + o;
	p->tab[y - 2][x] = 'A' + o;
	return (1);
}

int	ft_can_write18(int o, int x, int y, t_place *p)
{
	if (y - 1 < 0 || x - 1 < 0 || x + 1 >= p->max)
		return (0);
	if (p->tab[y - 1][x] != '.' 
			|| p->tab[y - 1][x - 1] != '.' 
			|| p->tab[y - 1][x + 1] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y - 1][x] = 'A' + o;
	p->tab[y - 1][x - 1] = 'A' + o;
	p->tab[y - 1][x + 1] = 'A' + o;
	return (1);
}
