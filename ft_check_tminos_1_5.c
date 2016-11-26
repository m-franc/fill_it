#include "fillit.h"

int		ft_check_tminos1(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 5] != '#' || str[i + 6] != '#')
		return (0);
	return (1);
}

int		ft_check_tminos2(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 15] != '#')
		return (0);
	return (2);
}

int		ft_check_tminos3(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 2] != '#' || str[i + 3] != '#')
		return (0);
	return (3);
}

int		ft_check_tminos4(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 6] != '#' || str[i + 11] != '#')
		return (0);
	return (4);
}

int		ft_check_tminos5(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 5] != '#' || str[i + 10] != '#')
		return (0);
	return (5);
}
