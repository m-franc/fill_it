/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:02:55 by mfranc            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/11/29 18:27:17 by ajehanno         ###   ########.fr       */
=======
/*   Updated: 2016/11/29 17:15:56 by mfranc           ###   ########.fr       */
>>>>>>> e2504ad807987d89d2a8093f8e116eacdb9fb506
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_check(int fd)
{
	char			*file;
	int				*tminos;
<<<<<<< HEAD
=======
	int				nb_map;
	char			**tab;
>>>>>>> e2504ad807987d89d2a8093f8e116eacdb9fb506

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
	ft_puttab(tab = ft_settab(nb_map));
	return (tminos);
}
