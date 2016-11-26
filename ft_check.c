/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:02:55 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/26 18:51:40 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_check(int fd)
{
	char	*file;
	int		*tminos;

	if (fd == - 1)
		return (0);
	file = ft_get_file(fd);
	if (ft_check_file(file) == 0)
		return (0);
	tminos = ft_check_tminos(file, &get_id);
	if (tminos == 0)
		return (0);
	return (tminos);
}
