/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:57:19 by mfranc            #+#    #+#             */
/*   Updated: 2016/12/05 19:22:19 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_check_map(char *str, int nb_map)
{
	int				*ids_tminos;
	int				i;
	int				o;
	int				start;

	i = 0;
	start = 0;
	o = 0;
	if (!(ids_tminos = (int*)malloc(sizeof(int) * nb_map)))
		return (NULL);
	while (str[i])
	{
		start = i;
		while (str[i] != '#')
			i++;
		ids_tminos[o] = ft_check_tminos(str, i);
		i = start + 21;
		if (ids_tminos[o] == 0)
			return (0);
		o++;
	}
	return (ids_tminos);
}
