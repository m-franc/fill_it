/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:14:28 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/26 18:57:05 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

# define BUFSIZE 545

char		*ft_get_file(int fd);
int			ft_check_file(char *str);
void		ft_exit();
int			ft_get_map(char *str);
int			*ft_check_tminos(char *str, (*ft_tab_fct_check)(char *str));
int			*ft_check(int fd);

#endif
