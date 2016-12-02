#include "fillit.h"

int	ft_can_write9(int o, t_place *p)
{
	if (p->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y - 2][p->x] != '.' 
			|| p->tab[p->y - 2][p->x + 1] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y - 2][p->x] = 'A' + o;
	p->tab[p->y - 2][p->x + 1] = 'A' + o;
	return (1);
}

int	ft_can_write10(int o, t_place *p)
{
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
	if (p->tab[p->y][p->x + 1] != '.' 
			|| p->tab[p->y - 1][p->x + 1] != '.' 
			|| p->tab[p->y - 1][p->x + 2] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y][p->x + 1] = 'A' + o;
	p->tab[p->y - 1][p->x + 1] = 'A' + o;
	p->tab[p->y - 1][p->x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write13(int o, t_place *p)
{
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
