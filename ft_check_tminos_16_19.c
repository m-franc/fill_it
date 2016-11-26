#include "fillit.h"

int		ft_check_tminos16(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 2] != '#' || str[i + 6] != '#')
		return (0);
	return (16);
}

int		ft_check_tminos17(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 4] != '#')
		return (0);
	return (17);
}

int		ft_check_tminos18(char *str, int i)
{
	if (str[i + 4] != '#' || str[i + 5] != '#' || str[i + 6] != '#')
		return (0);
	return (18);
}

int		ft_check_tminos19(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 6] != '#')
		return (0);
	return (19);
}

int		*tab_fct_check()
{
	int	*(tab_fct_check[20])(char *, int);

	tab_fct_check[0] = ft_check_tminos1;
	tab_fct_check[1] = ft_check_tminos2;
	tab_fct_check[2] = ft_check_tminos3;
	tab_fct_check[3] = ft_check_tminos4;
	tab_fct_check[4] = ft_check_tminos5;
	tab_fct_check[5] = ft_check_tminos6;
	tab_fct_check[6] = ft_check_tminos7;
	tab_fct_check[7] = ft_check_tminos8;
	tab_fct_check[8] = ft_check_tminos9;
	tab_fct_check[9] = ft_check_tminos10;
	tab_fct_check[10] = ft_check_tminos11;
	tab_fct_check[11] = ft_check_tminos12;
	tab_fct_check[12] = ft_check_tminos13;
	tab_fct_check[13] = ft_check_tminos14;
	tab_fct_check[14] = ft_check_tminos15;
	tab_fct_check[15] = ft_check_tminos16;
	tab_fct_check[16] = ft_check_tminos17;
	tab_fct_check[17] = ft_check_tminos18;
	tab_fct_check[18] = ft_check_tminos19;
	tab_fct_check[19] = '\0';
	return (tab_fct_check);
}
