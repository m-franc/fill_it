/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:02:29 by mfranc            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/11/30 12:29:41 by mfranc           ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Updated: 2016/11/28 15:08:42 by ajehanno         ###   ########.fr       */
=======
/*   Updated: 2016/11/28 18:52:10 by mfranc           ###   ########.fr       */
>>>>>>> origin/maxime
>>>>>>> 741164a6f40d95a9532fc07ed86684ea7345e6f6
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	**tetris;
//	char	**lauch;

	if (ac != 2)
	{
		ft_putendl("usage : fillit t_file");
		return (0);
	}
	tetris = ft_check(open(av[1], O_RDONLY));
	if (tetris == 0)
<<<<<<< HEAD
		ft_exit();
=======
//		ft_exit();
		return (0);
	else
	{

	}
>>>>>>> 741164a6f40d95a9532fc07ed86684ea7345e6f6
}
