#include "fillit.h"

int	ft_can_write9(int o, t_place *p)
{
	if (p->y - 1 < 0 || p->y - 2 < 0 || p->x + 1 >= p->max)
		return (0);
	if (p->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y - 2][p->x] != '.' 
			|| p->tab[p->y - 2][p->x + 1] != '.')
		return (0);
	p->tab[p->y][p->x] = 'D' + o;
	p->tab[p->y - 1][p->x] = 'D' + o;
	p->tab[p->y - 2][p->x] = 'D' + o;
	p->tab[p->y - 2][p->x + 1] = 'D' + o;
	return (1);
}

int	ft_can_write10(int o, t_place *p)
{
	if (p->y - 1 < 0 || p->x + 1 >= p->max || p->x + 2 >= p->max)
		return (0);
	if (p->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y][p->x + 1] != '.' 
			|| p->tab[p->y][p->x + 2] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y][p->x + 1] = 'A' + o;
	p->tab[p->y][p->x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write11(int o, t_place *p)
{
	if (p->y - 1 < 0 || p->x + 1 >= p->max || p->x + 2 >= p->max)
		return (0);
	if (p->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y - 1][p->x + 1] != '.' 
			|| p->tab[p->y - 1][p->x + 2] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x + 1] = 'A' + o;
	p->tab[p->y - 1][p->x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write12(int o, t_place *p)
{
	if (p->x + 1 >= p->max || p->y - 1 < 0 || p->x + 2 >= p->max)
		return (0);
	if (p->tab[p->y][p->x + 1] != '.' 
			|| p->tab[p->y - 1][p->x + 1] != '.' 
			|| p->tab[p->y - 1][p->x + 2] != '.')
		return (0);
	p->tab[p->y][p->x] = 'B' + o;
	p->tab[p->y][p->x + 1] = 'B' + o;
	p->tab[p->y - 1][p->x + 1] = 'B' + o;
	p->tab[p->y - 1][p->x + 2] = 'B' + o;
	return (1);
}

int	ft_can_write13(int o, t_place *p)
{
	if (p->y - 1 < 0 || p->y - 2 < 0 || p->x - 1 < 0)
		return (0);
	if (p->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y - 1][p->x - 1] != '.' 
			|| p->tab[p->y - 2][p->x - 1] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x - 1] = 'A' + o;
	p->tab[p->y - 2][p->x - 1] = 'A' + o;
	return (1);
}
