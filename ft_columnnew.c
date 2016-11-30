/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_columnnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:56:18 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/30 12:07:53 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_columnew(size_t n)
{
	size_t	i;
	char	**tab;
	
	if (!(tab = malloc(sizeof(char*) * n)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		ft_putchar('A');
		tab[i++] = ft_linenew(n, '.');
		ft_putchar('B');
	}
	return (tab);
}
