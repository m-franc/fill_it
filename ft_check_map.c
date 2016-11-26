/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:57:19 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/26 18:56:54 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_check_tminos(char *str, int (*get_id)(char *str))
{
	int	tab[26];
	int	*ids_tminos;
	int	i;
	int	o;
	int	start;

	i = 0;
	start = 0;
	tab = ids_tminos;
	o = 0;;
	while (str[i])
	{
		start = i;
		if (str[i] == '#')
			tab[o] = ft_tab_fct_check(str);
		i = start + 21;
		if (tab[o] == 0)
			return (0);
		o++;
	}
	return (ids_tminos);
}
