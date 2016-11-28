/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:57:19 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/28 17:43:22 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_check_map(char *str)
{
	int				*ids_tminos;
	int				i;
	int				tmp[26];
	int				o;
	int				start;

	i = 0;
	start = 0;
	o = 0;
	ids_tminos = tmp;
	while (str[i])
	{
		start = i;
		while (str[i] != '#')
			i++;
		tmp[o] = ft_check_tminos(str, i);	
		i = start + 21;
		if (tmp[o] == 0)
			return (0);
		o++;
	}
	return (ids_tminos);
}
