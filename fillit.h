Makefile/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:14:28 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/26 14:57:35 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

# define BUFSIZE 545

typedef struct		m_list
{
	char			*ligne[4];
	char			colonne[5];
}					map;

typedef struct		t_list
{
	struct i_list	*piece;
	struct t_list	*next;
	struct t_list	*prev;
}					tminos;

typedef struct		p_list
{
	char			*piece;
	int				x;
	int				y;
}					piece;

char				*ft_get_file(int fd);
int					ft_check_file(char *str);
void				ft_exit();
int					ft_get_map(char *str);

#endif
