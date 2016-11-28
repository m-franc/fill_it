/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:57:19 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/28 16:47:24 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_check_map(char *str)
{
	int				*ids_tminos;
	int				i;
	int				o;
	int				start;

	i = 0;
	start = 0;
	o = 0;
	ids_tminos = NULL;
	while (str[i])
	{
		start = i;
		if (str[i] == '#')	
			ids_tminos[o] = ft_check_tminos(str, i);
		i = start + 21;
		if (ids_tminos[o] == 0)
			return (0);
		o++;
	}
	return (ids_tminos);
}
