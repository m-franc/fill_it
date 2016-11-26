#include "fillit.c"

int		ft_check_tminos6(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 4] != '#' || str[i + 3] != '#')
		return (0);
	return (6);
}

int		ft_check_tminos7(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 2] != '#' || str[i + 7] != '#')
		return (0);
	return (7);
}

int		ft_check_tminos8(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 9] != '#')
		return (0);
	return (9);
}

int		ft_check_tminos9(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 11] != '#')
		return (0);
	return (9);
}

int		ft_check_tminos10(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 2] != '#' || str[i + 5] != '#')
		return (0);
	return (10);
}
