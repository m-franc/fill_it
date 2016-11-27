/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:57:19 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/27 18:35:48 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_check_tminos(char *str, int (*get_id)(char *str, int i))
{
	int	tab[26];
	int	*ids_tminos;
	int	i;
	int	o;
	int	start;

	i = 0;
	start = 0;
	tab = ids_tminos;
	o = 0;
	while (str[i])
	{
		start = i;
		if (str[i] == '#')
			tab[o] = get_id(str, i);
		i = start + 21;
		if (tab[o] == 0)
			return (0);
		o++;
	}
	return (ids_tminos);
}
