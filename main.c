/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:02:29 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/24 17:23:34 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lrlast/libft.h"

int main(int ac, char **av)
{
	if (ac != 1)
	{
		ft_putendl("usage : fillit t_file");
		return (0);
	}
	ft_putnbr(ft_get_number_tminos(open(av[1], "O_RDONLY")));
	return (0);
}
