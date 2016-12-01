#include "fillit.h"

int		ft_can_write(int id, char ***tab, int x, int y)
{
	C * t[] = {ft_can_write1, ft_can_write2, ft_can_write3,
	ft_can_write4, ft_can_write5, ft_can_write6, ft_can_write7,
   	ft_can_write8, ft_can_write9, ft_can_write10, ft_can_write11,
   	ft_can_write12, ft_can_write13, ft_can_write14, 
	ft_can_write15,	ft_can_write16, ft_can_write17, 
	ft_can_write18, ft_can_write19}
	if (t[id - 1](char ***tab, int x, int y) == 1)
		return (1);
	return (0); 
}

int		ft_can_write1(char ***tab, int x, int y)
{
	if (tab[y][x + 1] != '.' || tab[y + 1][x] != '.' || tab[y + 1][x + 1] != '.')
		return (0);
	tab[y][x] = '1';
	return (1);
}

int		ft_can_write2(char ***tab, int x, int y)
{
	if (tab[y + 1][x] != '.' || tab[y + 2][x] != '.' || tab[y + 3][x] != '.')
		return (0);
	return (1);
}

int		ft_can_write3(char ***tab, int x, int y)
{
	if (tab[y][x + 1] != '.' || tab[y][x + 2] != '.' || tab[y][x + 3] != '.')
		return (0);
	return (1);
}
