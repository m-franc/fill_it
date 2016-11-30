/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setsizetab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:22:34 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/30 16:54:26 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_set_size_tab(int nb_map)
{
	if (nb_map == 1 || nb_map == 2 || nb_map == 3)
		return (nb_map + 1);
	else if (nb_map == 4 || nb_map == 5)
		return (nb_map);
	else if (nb_map == 6)
		return (nb_map - 1);
	else if (nb_map >= 7 && nb_map <= 9)
		return (6);
	else if (nb_map >= 10 && nb_map <= 12)
		return (7);
	else if (nb_map >= 13 && nb_map <= 16)
		return (8);
	else if (nb_map >= 17 && nb_map <= 20)
		return (9);
	else if (nb_map >= 21 && nb_map <= 24)
		return (10);
	else if (nb_map >= 25 && nb_map <= 27)
		return (11);
	else
		return (0);
}
