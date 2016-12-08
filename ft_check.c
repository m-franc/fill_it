/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:39:29 by ajehanno          #+#    #+#             */
/*   Updated: 2016/12/08 12:39:32 by ajehanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check(int fd)
{
	char			*file;
	int				*tminos;
	int				nb_map;
	int				sizetab;

	if (fd == -1)
		return (0);
	file = ft_get_file(fd);
	if (ft_check_file(file) == 0)
		return (0);
	nb_map = ft_get_map(file);
	if (nb_map == 0)
		return (0);
	tminos = ft_check_map(file, nb_map);
	if (tminos == 0)
		return (0);
	sizetab = ft_set_size_tab(nb_map);
	ft_settab(nb_map, tminos, sizetab);
	return (1);
}
