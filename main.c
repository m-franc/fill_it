/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:42:02 by ajehanno          #+#    #+#             */
/*   Updated: 2016/12/08 12:42:04 by ajehanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		ok;

	if (ac != 2)
	{
		ft_putendl("usage : fillit t_file");
		return (0);
	}
	ok = ft_check(open(av[1], O_RDONLY));
	if (ok == 0)
		ft_exit();
}
