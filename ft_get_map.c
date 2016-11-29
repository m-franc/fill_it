/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:54:52 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/28 17:23:35 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_get_map(char *str)
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
			return (0);
		i++;
		map++;
	}
	return (map);
}
