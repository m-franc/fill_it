/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:02:29 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/25 20:07:48 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putendl("usage : fillit t_file");
		return (0);
	}

	ft_putnbr(ft_get_pieces(ft_get_map(open(av[1], O_RDONLY))));
	return (0);
}
