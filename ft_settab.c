/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_settab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:10:44 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/29 18:13:38 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_settab(int size)
{
	int		sizetab;
	char	**tab;
	char	c;
	char	*ac;

	c = '.';
	ac = &c;
	sizetab = ft_set_size_tab(size);
	tab = ft_columnew(sizetab, ac);
	if (tab == NULL)
		return (NULL);
	*tab = ft_linenew(sizetab, '.');
	if (*tab == NULL)
		return (NULL);
	return (tab);
}
