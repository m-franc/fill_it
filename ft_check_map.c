/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:39:29 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/25 20:25:07 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_map(char *str)
{
	int	i;
	int	j;
	int	o;

	i = 0;
	o = 0;
	while (str[i])
	{
		o = 0;
		while (o < 4)
		{
			j = 0;
			while (str[i] && j < 4)
			{
				if (str[i] != '.' && str[i] != '#')
					ft_exit();
				i++;
				j++;
			}
			if (str[i] != '\n')
				ft_exit();
			o++;
			i++;
		}
		i++;
	}
	if (str[i - 1] == '\n' && str[i - 2] == '\n')
		ft_exit();
	return (1);
}
