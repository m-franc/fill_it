/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tminos_16_19.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 19:31:44 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/28 11:28:31 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tminos16(char *str, int i)
{
	if (str[i + 1] != '#' || str[i + 2] != '#' || str[i + 6] != '#')
		return (0);
	return (16);
}

int		ft_check_tminos17(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 4] != '#')
		return (0);
	return (17);
}

int		ft_check_tminos18(char *str, int i)
{
	if (str[i + 4] != '#' || str[i + 5] != '#' || str[i + 6] != '#')
		return (0);
	return (18);
}

int		ft_check_tminos19(char *str, int i)
{
	if (str[i + 5] != '#' || str[i + 10] != '#' || str[i + 6] != '#')
		return (0);
	return (19);
}

int	(*get_id[19])(char *, int) = {ft_check_tminos1, ft_check_tminos2, 
	ft_check_tminos3,ft_check_tminos4, ft_check_tminos6, 
	ft_check_tminos7, ft_check_tminos8,ft_check_tminos9, 
	ft_check_tminos10, ft_check_tminos11, ft_check_tminos12, 
	ft_check_tminos13, ft_check_tminos14, ft_check_tminos15, 
	ft_check_tminos16, ft_check_tminos17, ft_check_tminos18, 
	ft_check_tminos19};

