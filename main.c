/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:02:29 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/28 18:52:10 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int	*tetris;
	int	i;
	if (ac != 2)
	{
		ft_putendl("usage : fillit t_file");
		return (0);
	}
	tetris = ft_check(open(av[1], O_RDONLY));
	if (tetris == 0)
		ft_exit();
	else
	{

	}
}
