/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:02:55 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/30 12:32:19 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_check(int fd)
{
	char			*file;
	int				*tminos;
	int				nb_map;
	char			**tab;

	if (fd == - 1)
		return (0);
	file = ft_get_file(fd);
	if (ft_check_file(file) == 0)
		return (0);
	nb_map = ft_get_map(file);
	if (nb_map == 0)
		return (0);
	tminos = ft_check_map(file);
	if (tminos == 0)
		return (0);
	tab = ft_settab(nb_map/*, tminos*/);
	return (tab);
}
