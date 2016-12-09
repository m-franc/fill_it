/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tminos_6_10.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 19:29:25 by mfranc            #+#    #+#             */
/*   Updated: 2016/12/09 14:41:38 by ajehanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tminos6(char *str, int i, int max)
{
	if (i + 5 > max || i + 4 > max || i + 3 > max)
		return (0);
	if (str[i + 5] != '#' || str[i + 4] != '#' || str[i + 3] != '#')
		return (0);
	return (6);
}

int		ft_check_tminos7(char *str, int i, int max)
{
	if (i + 1 > max || i + 2 > max || i + 7 > max)
		return (0);
	if (str[i + 1] != '#' || str[i + 2] != '#' || str[i + 7] != '#')
		return (0);
	return (7);
}

int		ft_check_tminos8(char *str, int i, int max)
{
	if (i + 5 > max || i + 10 > max || i + 9 > max)
		return (0);
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 9] != '#')
		return (0);
	return (8);
}

int		ft_check_tminos9(char *str, int i, int max)
{
	if (i + 5 > max || i + 10 > max || i + 11 > max)
		return (0);
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 11] != '#')
		return (0);
	return (9);
}

int		ft_check_tminos10(char *str, int i, int max)
{
	if (i + 1 > max || i + 2 > max || i + 5 > max)
		return (0);
	if (str[i + 1] != '#' || str[i + 2] != '#' || str[i + 5] != '#')
		return (0);
	return (10);
}
