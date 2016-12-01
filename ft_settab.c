#include "fillit.h"

char	**ft_settab(int size, int *tminos)
{
	int		sizetab;
	char	**grid;	
	int		*copy;

	copy = ft_memcpy(copy, tminos, size);
	sizetab = ft_set_size_tab(size);
	grid = ft_columnew(sizetab);
	if (grid == NULL)
		return (NULL);
	ft_puttminos(copy, &grid, size);
	ft_puttab(tab);
	return (tab);
}

// Premiere fonction de l'algo, le tableau d;is des tminos, pour aller chercher les fonctions correspondantes pour remplir le tableau, le taille du tableau pour incrementer...'

char	**ft_puttminos(int *copy, char **tab, int size)
{
	int	x;
	int	y;
	int	i;
	int tmp;

	y = 0;
	i = 0;
	tmp = 0;
	while (tab[y])
	{
		x = 0;
		while (tab[y][x])
		{
			if (tab[y][x] == '.')
			{
				i = 0;
				tmp = 0;
				while (tmp == 0 && i < size)
				{
					//				ft_gettminos(copy[i], &tab, &x, &y);
					if (copy[i] != 0)
					{
						tmp = ft_can_write(copy[i], &tab, &x, &y);
						if (tmp == 1)
						{
							ft_puttminos_2(i, &tab, &x, &y);
							copy[i] = 0;
						}
					}
					i++;
				}
			}
			x++;
		}
		y++;
	}
	return (tab);
}

