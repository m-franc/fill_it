/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tminos_16_19.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 19:31:44 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/28 12:12:10 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
