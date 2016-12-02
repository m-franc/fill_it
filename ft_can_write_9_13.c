#include "fillit.h"

int	ft_can_write9(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y - 1][cp->x] != '.' 
			|| cp->tab[cp->y - 2][cp->x] != '.' 
			|| cp->tab[cp->y - 2][cp->x + 1] != '.')
		return (0);
	cp->tab[cp->y][p->x] = 'A' + o;
	cp->tab[cp->y - 1][cp->x] = 'A' + o;
	cp->tab[cp->y - 2][cp->x] = 'A' + o;
	cp->tab[cp->y - 2][cp->x + 1] = 'A' + o;
	return (1);
}

int	ft_can_write10(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y - 1][cp->x] != '.' 
			|| cp->tab[cp->y][cp->x + 1] != '.' 
			|| cp->tab[cp->y][cp->x + 2] != '.')
		return (0);
	cp->tab[cp->y][cp->x] = 'A' + o;
	cp->tab[cp->y - 1][cp->x] = 'A' + o;
	cp->tab[cp->y][cp->x + 1] = 'A' + o;
	cp->tab[cp->y][cp->x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write11(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y - 1][cp->x] != '.' 
			|| cp->tab[cp->y - 1][cp->x + 1] != '.' 
			|| cp->tab[cp->y - 1][cp->x + 2] != '.')
		return (0);
	p->tab[cp->y][cp->x] = 'A' + o;
	p->tab[cp->y - 1][cp->x] = 'A' + o;
	p->tab[cp->y - 1][cp->x + 1] = 'A' + o;
	p->tab[cp->y - 1][cp->x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write12(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y][cp->x + 1] != '.' 
			|| cp->tab[cp->y - 1][cp->x + 1] != '.' 
			|| cp->tab[cp->y - 1][cp->x + 2] != '.')
		return (0);
	p->tab[cp->y][cp->x] = 'A' + o;
	p->tab[cp->y][cp->x + 1] = 'A' + o;
	p->tab[cp->y - 1][cp->x + 1] = 'A' + o;
	p->tab[cp->y - 1][cp->x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write13(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y - 1][cp->x] != '.' 
			|| cp->tab[cp->y - 1][cp->x - 1] != '.' 
			|| cp->tab[cp->y - 2][cp->x - 1] != '.')
		return (0);
	p->tab[cp->y][cp->x] = 'A' + o;
	p->tab[cp->y - 1][cp->x] = 'A' + o;
	p->tab[cp->y - 1][cp->x - 1] = 'A' + o;
	p->tab[cp->y - 2][cp->x - 1] = 'A' + o;
	return (1);
}
