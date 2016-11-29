/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_columnnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:56:18 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/29 18:13:52 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_columnew(size_t n, char *c)
{
	size_t			i;
	unsigned char	**tab;

	if (!(tab = malloc(sizeof(char*) * n + 1)))
		return (NULL);
	i = 0;
	while (i < n)
		tab[i++] = (unsigned char*)c;
	return ((char**)tab);
}
