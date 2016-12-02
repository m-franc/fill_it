#include "fillit.h"

int	ft_can_write14(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y][cp->x + 1] != '.' 
			|| cp->tab[cp->y - 1][cp->x] != '.' 
			|| cp->tab[cp->y - 1][cp->x - 1] != '.')
		return (0);
	p->tab[cp->y][cp->x] = 'A' + o;
	p->tab[cp->y][cp->x + 1] = 'A' + o;
	p->tab[cp->y - 1][cp->x] = 'A' + o;
	p->tab[cp->y - 1][cp->x - 1] = 'A' + o;
	return (1);
}

int	ft_can_write15(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y - 1][cp->x] != '.' 
			|| cp->tab[cp->y - 1][cp->x + 1] != '.' 
			|| cp->tab[cp->y - 2][cp->x + 1] != '.')
		return (0);
	p->tab[cp->y][cp->x] = 'A' + o;
	p->tab[cp->y - 1][cp->x] = 'A' + o;
	p->tab[cp->y - 1][cp->x + 1] = 'A' + o;
	p->tab[cp->y - 2][cp->x + 1] = 'A' + o;
	return (1);
}

int	ft_can_write16(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y][cp->x + 1] != '.' 
			|| cp->tab[cp->y - 1][cp->x + 1] != '.' 
			|| cp->tab[cp->y][cp->x + 2] != '.')
		return (0);
	p->tab[cp->y][cp->x] = 'A' + o;
	p->tab[cp->y][cp->x + 1] = 'A' + o;
	p->tab[cp->y - 1][cp->x + 1] = 'A' + o;
	p->tab[cp->y][cp->x + 2] = 'A' + o;
	return (1);
}

int	ft_can_write17(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y - 1][cp->x] != '.' 
			|| cp->tab[cp->y - 1][cp->x - 1] != '.' 
			|| cp->tab[cp->y - 2][cp->x] != '.')
		return (0);
	p->tab[cp->y][cp->x] = 'A' + o;
	p->tab[cp->y - 1][cp->x] = 'A' + o;
	p->tab[cp->y - 1][cp->x - 1] = 'A' + o;
	p->tab[cp->y - 2][cp->x] = 'A' + o;
	return (1);
}

int	ft_can_write18(int o, t_place *****p)
{
	t_place	*cp;

	cp = &p;
	if (cp->tab[cp->y - 1][cp->x] != '.' 
			|| cp->tab[cp->y - 1][cp->x - 1] != '.' 
			|| cp->tab[cp->y - 1][cp->x + 1] != '.')
		return (0);
	cp->tab[cp->y][cp->x] = 'A' + o;
	cp->tab[cp->y - 1][cp->x] = 'A' + o;
	cp->tab[cp->y - 1][cp->x - 1] = 'A' + o;
	cp->tab[cp->y - 1][cp->x + 1] = 'A' + o;
	return (1);
}
