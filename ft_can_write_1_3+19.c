#include "fillit.h"

int		ft_can_write(int id, int o, t_place ****p)
{
	C * t[] = {ft_can_write1, ft_can_write2, ft_can_write3,
	ft_can_write4, ft_can_write5, ft_can_write6, ft_can_write7,
   	ft_can_write8, ft_can_write9, ft_can_write10, ft_can_write11,
   	ft_can_write12, ft_can_write13, ft_can_write14, 
	ft_can_write15,	ft_can_write16, ft_can_write17, 
	ft_can_write18, ft_can_write19}
	if (t[id - 1](o, &p) == 1)
		return (1);
	return (0); 
}

int		ft_can_write1(int o, t_place *****place)
{
	t_place *cp;

	cp = &p
	if (cp->tab[cp->y][cp->x + 1] != '.' 
			|| cp->tab[cp->y + 1][cp->x] != '.' 
			|| cp->tab[cp->y + 1][cp->x + 1] != '.')
		return (0);
	cp->tab[cp->y][cp->x] = 'A' + o;
	cp->tab[cp->y][cp->x + 1] = 'A' + o;
	cp->tab[cp->y + 1][cp->x] = 'A' + o;
	cp->tab[cp->y + 1][cp->x + 1] = 'A' + o;
	return (1);
}

int		ft_can_write2(int o, t_place *****place)
{
	t_place *cp;

	cp = &p;
	if (cp->tab[cp->y + 1][cp->x] != '.' 
			|| cp->tab[cp->y + 2][cp->x] != '.' 
			|| cp->tab[cp->y + 3][cp->x] != '.')
		return (0);
	cp->tab[cp->y][cp->x] = 'A' + o;
	cp->tab[cp->y + 1][cp->x] = 'A' + o;
	cp->tab[cp->y + 2][cp->x] = 'A' + o;
	cp->tab[cp->y + 3][cp->x] = 'A' + o;
	return (1);
}

int		ft_can_write3(int o, t_place *****place)
{
	t_place *cp;

	cp = &p;
	if (cp->tab[cp->y + 1][cp->x] != '.' 
			|| cp->tab[cp->y][cp->x + 2] != '.' 
			|| cp->tab[cp->y][cp->x + 3] != '.')
		return (0);
	cp->tab[cp->y][cp->x] = 'A' + o;
	cp->tab[cp->y][cp->x + 1] = 'A' + o;
	cp->tab[cp->y][cp->x + 2] = 'A' + o;
	cp->tab[cp->y][cp->x + 3] = 'A' + o;
	return (1);
}

int		ft_can_write19(int o, t_place *****place)
{
	t_place *cp;

	cp = &p;
	if (cp->tab[cp->y + 1][cp->x] != '.' 
			|| cp->tab[cp->y + 1][cp->x + 1] != '.' 
			|| cp->tab[cp->y + 2][cp->x] != '.')
		return (0);
	cp->tab[cp->y][cp->x] = 'A' + o;
	cp->tab[cp->y + 1][cp->x] = 'A' + o;
	cp->tab[cp->y + 1][cp->x + 1] = 'A' + o;
	cp->tab[cp->y + 2][cp->x] = 'A' + o;
	return (1);
}
