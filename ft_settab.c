/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_settab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:10:44 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/30 12:02:06 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_settab(int size/*, int *tminos*/)
{
	int		sizetab;
	char	**tab;
//	char	*pieces;
	
	sizetab = ft_set_size_tab(size);
	tab = ft_columnew(sizetab);
	if (tab == NULL)
		return (NULL);
//	tminos = puttab(tminos, tab);
	ft_putstr("COOL");
	ft_puttab(tab);
	return (tab);
}

/*char	*puttab(int *tminos, char **tab)
{
	char	*select;

	
}*/
