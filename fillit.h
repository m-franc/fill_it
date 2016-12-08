/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:03:51 by ajehanno          #+#    #+#             */
/*   Updated: 2016/12/08 19:25:27 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

# define BUFSIZE 545

typedef struct	s_struct
{
	char	**tab;
	int		*ids;
	int		max;
	int		size;
	int		write;
}				t_place;

char			*ft_get_file(int fd);
int				ft_check_file(char *str);
void			ft_exit();
int				ft_get_map(char *str);
int				*ft_check_map(char *str, int nb_map);
int				ft_check(int fd);

void			ft_settab(int size, int *tminos, int sizetab);
int				backtrack(t_place *p, int x, int y, int o);
int				under_backtrack(t_place *p, int x, int y, int o);
int				ft_set_size_tab(int nb_map);
void			ft_prepare(t_place *p, int *tminos, int sizetab, int size);
char			**ft_build_tab(int sizetab, int x, int y);

int				ft_can_write(int o, int x, int y, t_place *p);
int				ft_can_write1(int o, int x, int y, t_place *p);
int				ft_can_write2(int o, int x, int y, t_place *p);
int				ft_can_write3(int o, int x, int y, t_place *p);
int				ft_can_write4(int o, int x, int y, t_place *p);
int				ft_can_write5(int o, int x, int y, t_place *p);
int				ft_can_write6(int o, int x, int y, t_place *p);
int				ft_can_write7(int o, int x, int y, t_place *p);
int				ft_can_write8(int o, int x, int y, t_place *p);
int				ft_can_write9(int o, int x, int y, t_place *p);
int				ft_can_write10(int o, int x, int y, t_place *p);
int				ft_can_write11(int o, int x, int y, t_place *p);
int				ft_can_write12(int o, int x, int y, t_place *p);
int				ft_can_write13(int o, int x, int y, t_place *p);
int				ft_can_write14(int o, int x, int y, t_place *p);
int				ft_can_write15(int o, int x, int y, t_place *p);
int				ft_can_write16(int o, int x, int y, t_place *p);
int				ft_can_write17(int o, int x, int y, t_place *p);
int				ft_can_write18(int o, int x, int y, t_place *p);
int				ft_can_write19(int o, int x, int y, t_place *p);

void			ft_delete(int o, int x, int y, t_place *p);
void			ft_delete1(int x, int y, t_place *p);
void			ft_delete2(int x, int y, t_place *p);
void			ft_delete3(int x, int y, t_place *p);
void			ft_delete4(int x, int y, t_place *p);
void			ft_delete5(int x, int y, t_place *p);
void			ft_delete6(int x, int y, t_place *p);
void			ft_delete7(int x, int y, t_place *p);
void			ft_delete8(int x, int y, t_place *p);
void			ft_delete9(int x, int y, t_place *p);
void			ft_delete10(int x, int y, t_place *p);
void			ft_delete11(int x, int y, t_place *p);
void			ft_delete12(int x, int y, t_place *p);
void			ft_delete13(int x, int y, t_place *p);
void			ft_delete14(int x, int y, t_place *p);
void			ft_delete15(int x, int y, t_place *p);
void			ft_delete16(int x, int y, t_place *p);
void			ft_delete17(int x, int y, t_place *p);
void			ft_delete18(int x, int y, t_place *p);
void			ft_delete19(int x, int y, t_place *p);

int				ft_check_tminos(char *str, int i);
int				ft_check_tminos1(char *str, int i);
int				ft_check_tminos2(char *str, int i);
int				ft_check_tminos3(char *str, int i);
int				ft_check_tminos4(char *str, int i);
int				ft_check_tminos5(char *str, int i);
int				ft_check_tminos6(char *str, int i);
int				ft_check_tminos7(char *str, int i);
int				ft_check_tminos8(char *str, int i);
int				ft_check_tminos9(char *str, int i);
int				ft_check_tminos10(char *str, int i);
int				ft_check_tminos11(char *str, int i);
int				ft_check_tminos12(char *str, int i);
int				ft_check_tminos13(char *str, int i);
int				ft_check_tminos14(char *str, int i);
int				ft_check_tminos15(char *str, int i);
int				ft_check_tminos16(char *str, int i);
int				ft_check_tminos17(char *str, int i);
int				ft_check_tminos18(char *str, int i);
int				ft_check_tminos19(char *str, int i);

typedef	int		(*t_find)(char *str, int i);

typedef	int		(*t_can)(int o, int x, int y, t_place *p);

typedef	void	(*t_del)(int x, int y, t_place *p);

#endif
