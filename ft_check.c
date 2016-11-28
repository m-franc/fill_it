/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:02:55 by mfranc            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/11/28 15:38:09 by ajehanno         ###   ########.fr       */
=======
/*   Updated: 2016/11/28 18:09:19 by mfranc           ###   ########.fr       */
>>>>>>> origin/maxime
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_check(int fd)
{
<<<<<<< HEAD
	char	*file;
	int		*tminos;
	
=======
	char			*file;
	int				*tminos;
	int				nb_map;

>>>>>>> origin/maxime
	if (fd == - 1)
		return (0);
	file = ft_get_file(fd);
	if (ft_check_file(file) == 0)
		return (0);
<<<<<<< HEAD
	tminos = ft_check_tminos(file);
=======
	nb_map = ft_get_map(file);
	if (nb_map == 0)
		return (0);
	tminos = ft_check_map(file);
>>>>>>> origin/maxime
	if (tminos == 0)
		return (0);
	return (tminos);
}
