#include "fillit.h"

int		ft_can_write(int id, int o, t_place *p)
{
	C * tv[] = {ft_can_write1, ft_can_write2, ft_can_write3,
		ft_can_write4, ft_can_write5, ft_can_write6, ft_can_write7,
		ft_can_write8, ft_can_write9, ft_can_write10, ft_can_write11,
		ft_can_write12, ft_can_write13, ft_can_write14, 
		ft_can_write15,	ft_can_write16, ft_can_write17, 
		ft_can_write18, ft_can_write19};
	if (tv[id - 1](o, p) == 1)
		return (1);
	return (0); 
}

int		ft_can_write1(int o, t_place *p)
{
	if (p->tab[p->y][p->x + 1] != '.' 
			|| p->tab[p->y + 1][p->x] != '.' 
			|| p->tab[p->y + 1][p->x + 1] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y][p->x + 1] = 'A' + o;
	p->tab[p->y + 1][p->x] = 'A' + o;
	p->tab[p->y + 1][p->x + 1] = 'A' + o;
	return (1);
}

int		ft_can_write2(int o, t_place *p)
{
	if (p->tab[p->y + 1][p->x] != '.' 
			|| p->tab[p->y + 2][p->x] != '.' 
			|| p->tab[p->y + 3][p->x] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y + 1][p->x] = 'A' + o;
	p->tab[p->y + 2][p->x] = 'A' + o;
	p->tab[p->y + 3][p->x] = 'A' + o;
	return (1);
}

int		ft_can_write3(int o, t_place *p)
{
	if (p->tab[p->y + 1][p->x] != '.' 
			|| p->tab[p->y][p->x + 2] != '.' 
			|| p->tab[p->y][p->x + 3] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y][p->x + 1] = 'A' + o;
	p->tab[p->y][p->x + 2] = 'A' + o;
	p->tab[p->y][p->x + 3] = 'A' + o;
	return (1);
}

int		ft_can_write19(int o, t_place *p)
{
	if (p->tab[p->y + 1][p->x] != '.' 
			|| p->tab[p->y + 1][p->x + 1] != '.' 
			|| p->tab[p->y + 2][p->x] != '.')
		return (0);
	p->tab[p->y][p->x] = 'A' + o;
	p->tab[p->y + 1][p->x] = 'A' + o;
	p->tab[p->y + 1][p->x + 1] = 'A' + o;
	p->tab[p->y + 2][p->x] = 'A' + o;
	return (1);
}
