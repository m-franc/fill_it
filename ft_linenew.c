/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:56:26 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/30 12:06:49 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_linenew(size_t n, int c)
{
	char	*str;
	size_t	i;

	i = 0;
	ft_putchar('a');
	if (!(str = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (i < n)
		str[i++] = (char)c;
	return (str);
}
