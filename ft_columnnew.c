/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_columnnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:56:18 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/30 14:25:15 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_columnew(size_t n)
{
	size_t	i;
	char	**tab;
	
	if (!(tab = malloc(sizeof(char*) * n + 1)))
		return (NULL);
	i = 0;
	while (i < n)
		tab[i++] = ft_linenew(n, '.');
	tab[i] = 0;
	return (tab);
}
