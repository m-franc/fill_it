/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:57:19 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/28 18:01:35 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tminos(char *str, int i)
{
	int r;
	int o;

	F * t[] = {ft_check_tminos1, ft_check_tminos2, ft_check_tminos3, 
	ft_check_tminos4, ft_check_tminos5, ft_check_tminos6, ft_check_tminos7, 
	ft_check_tminos8, ft_check_tminos9, ft_check_tminos10, ft_check_tminos11, 
	ft_check_tminos12, ft_check_tminos13, ft_check_tminos14,
	ft_check_tminos15, ft_check_tminos16, ft_check_tminos17, 
	ft_check_tminos18, ft_check_tminos19}; 
	r = 0;
	o = 0;
	while (o < 19)
	{
		if (t[o](str, i) > r)
			r = t[o](str, i);
		o++;
	}
	return (r);
}
