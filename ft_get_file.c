/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:52:58 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/26 18:52:01 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_get_file(int fd)
{
	char			buf[BUFSIZE];
	int				ret;
	int				i;
	static char		str[BUFSIZE + 1];

	i = 0;
	while ((ret = read(fd, buf, BUFSIZE)))
	{
		buf[ret] = '\0';
	}
	while (buf[i])
	{
		str[i] = buf[i];
		i++;
	}
	return (str);
}
