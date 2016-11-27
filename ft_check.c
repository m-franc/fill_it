/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:02:55 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/27 18:38:22 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_check(int fd)
{
	char	*file;
	int		*tminos;
	int		*tab;
	int	    (*get_id)(char *, int);
	
	get_id = {ft_check_tminos1, ft_check_tminos2, 
		ft_check_tminos3, ft_check_tminos4, ft_check_tminos6, ft_check_tminos7, 
		ft_check_tminos8, ft_check_tminos9, ft_check_tminos10, 
		ft_check_tminos11, ft_check_tminos12, ft_check_tminos13,
		ft_check_tminos14, ft_check_tminos15, ft_check_tminos16, 
		ft_check_tminos17, ft_check_tminos18, ft_check_tminos19};

	if (fd == - 1)
		return (0);
	file = ft_get_file(fd);
	if (ft_check_file(file) == 0)
		return (0);
	tab = ft_tab1();
	tminos = ft_check_tminos(file, get_id);
	if (tminos == 0)
		return (0);
	return (tminos);
}
