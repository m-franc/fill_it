#include "fillit.h"

int	ft_can_write4(int o, t_place *p)
{
	if (p->x + 1 >= p->max || p->y + 1 >= p->max || p->y + 2 >= p->max)
		return (0);
	if (p->tab[p->y][p->x + 1] != '.' 
			|| p->tab[p->y + 1][p->x + 1] != '.' 
			|| p->tab[p->y + 2][p->x + 1] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y][p->x + 1] = 'A' + o;
	p->tab[p->y + 1][p->x + 1] = 'A' + o;
	p->tab[p->y + 2][p->x + 1] = 'A' + o;
	return (1);
}

int	ft_can_write5(int o, t_place *p)
{
	if (p->x + 1 >= p->max || p->y + 1 >= p->max || p->y + 2 >= p->max)
		return (0);
	if (p->tab[p->y][p->x + 1] != '.' 
			|| p->tab[p->y + 1][p->x] != '.' 
			|| p->tab[p->y + 2][p->x] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y][p->x + 1] = 'A' + o;
	p->tab[p->y + 1][p->x] = 'A' + o;
	p->tab[p->y + 2][p->x] = 'A' + o;
	return (1);
}

int	ft_can_write6(int o, t_place *p)
{
	if (p->y - 1 < 0 || p->x - 1 < 0 || p->x - 2 < 0)
		return (0);
	if (p->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y - 1][p->x - 1] != '.' 
			|| p->tab[p->y - 1][p->x - 2] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x - 1] = 'A' + o;
	p->tab[p->y - 1][p->x - 2] = 'A' + o;
	return (1);
}

int	ft_can_write7(int o, t_place *p)
{
	if (p->y - 1 < 0 || p->x + 2 >= p->max || p->x + 1 >= p->max)
		return (0);
	if (p->tab[p->y][p->x + 1] != '.' 
			|| p->tab[p->y][p->x + 2] != '.' 
			|| p->tab[p->y - 1][p->x + 2] != '.')
		return (0);
	p->tab[p->y][p->x] = 'C' + o;
	p->tab[p->y][p->x + 1] = 'C' + o;
	p->tab[p->y][p->x + 2] = 'C' + o;
	p->tab[p->y - 1][p->x + 2] = 'C' + o;
	return (1);
}

int	ft_can_write8(int o, t_place *p)
{
	if (p->y - 1 < 0 || p->y - 2 < 0 || p->x - 1 < 0)
		return (0);
	if (p->tab[p->y - 1][p->x] != '.' 
			|| p->tab[p->y - 2][p->x] != '.' 
			|| p->tab[p->y - 2][p->x - 1] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y - 1][p->x] = 'A' + o;
	p->tab[p->y - 2][p->x] = 'A' + o;
	p->tab[p->y - 2][p->x - 1] = 'A' + o;
	return (1);
}
