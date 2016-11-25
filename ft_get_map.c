/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:32:47 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/25 18:49:29 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_get_map(int fd)
{
	char		buf[BUFSIZE];
	int			ret;
	int			i;
	static char		str[BUFSIZE + 1];

	i = 0;
	if (fd == -1)
	{
		ft_putendl("open() error");
		ft_exit();
	}
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
