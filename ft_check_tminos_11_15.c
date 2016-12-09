/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tminos_11_15.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 18:38:45 by mfranc            #+#    #+#             */
/*   Updated: 2016/12/09 14:45:30 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tminos11(char *str, int i, int max)
{
	if (i + 5 > max || i + 6 > max || i + 7 > max)
		return (0);
	if (str[i + 5] != '#' || str[i + 6] != '#' || str[i + 7] != '#')
		return (0);
	return (11);
}

int		ft_check_tminos12(char *str, int i, int max)
{
	if (i + 1 > max || i + 6 > max || i + 7 > max)
		return (0);
	if (str[i + 1] != '#' || str[i + 6] != '#' || str[i + 7] != '#')
		return (0);
	return (12);
}

int		ft_check_tminos13(char *str, int i, int max)
{
	if (i + 5 > max || i + 4 > max || i + 9 > max)
		return (0);
	if (str[i + 5] != '#' || str[i + 4] != '#' || str[i + 9] != '#')
		return (0);
	return (13);
}

int		ft_check_tminos14(char *str, int i, int max)
{
	if (i + 1 > max || i + 5 > max || i + 4 > max)
		return (0);
	if (str[i + 1] != '#' || str[i + 5] != '#' || str[i + 4] != '#')
		return (0);
	return (14);
}

int		ft_check_tminos15(char *str, int i, int max)
{
	if (i + 5 > max || i + 6 > max || i + 11 > max)
		return (0);
	if (str[i + 5] != '#' || str[i + 6] != '#' || str[i + 11] != '#')
		return (0);
	return (15);
}
