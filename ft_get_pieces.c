/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pieces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 20:12:17 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/25 20:23:05 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_number_tminos(char *str)
{
	int	i;
	int j;
	int	pieces;
	int	map;

	i = 0;
	map = 0;
	while (str[i])
	{
		j = 0;
		pieces = 0;
		while (j < 20)
		{
			if (str[i] == '#')
				pieces++;
			j++;
			i++;
		}
		if (pieces != 4)
			ft_exit();
		i++;
		map++;
	}
	return (map);
}
