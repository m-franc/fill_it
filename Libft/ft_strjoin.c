/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:01:20 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/16 16:52:14 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*combin;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(combin = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	i = -1;
	while (s1[++i])
		combin[i] = s1[i];
	j = 0;
	while (s2[j])
		combin[i++] = s2[j++];
	combin[i] = '\0';
	return (combin);
}
