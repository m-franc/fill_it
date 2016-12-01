#ifndef FILLIT_H

# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

# define BUFSIZE 545

typedef struct	s_struct
{
	char	**tab;
	int		x;
	int		y;
}				t_place;

typedef int F(char *, int);
typedef int C(int id, char ***tab, int x, int y);

char	*ft_get_file(int fd);
int		ft_check_file(char *str);
void	ft_exit();
int		ft_get_map(char *str);
int		*ft_check_map(char *str);
int		ft_check(int fd);

void	ft_settab(int size, int *tminos, int sizetab);
int		ft_check_tab(int **copy, t_place **p, int size);
int		ft_puttminos(int ***copy, t_place ***p, int size);
int		ft_set_size_tab(int nb_map);
char	**ft_columnew(size_t n);
char	*ft_linenew(size_t n, int c);

int		ft_can_write(int id, int o, ****p);
int		ft_can_write1(int o, t_place *****p);
int		ft_can_write2(int o, t_place *****p);
int		ft_can_write3(int o, t_place *****p);
int		ft_can_write4(int o, t_place *****p);
int		ft_can_write5(int o, t_place *****p);
int		ft_can_write6(int o, t_place *****p);
int		ft_can_write7(int o, t_place *****p);
int		ft_can_write8(int o, t_place *****p);
int		ft_can_write9(int o, t_place *****p);
int		ft_can_write10(int o, t_place *****p);
int		ft_can_write11(int o, t_place *****p);
int		ft_can_write12(int o, t_place *****p);
int		ft_can_write13(int o, t_place *****p);
int		ft_can_write14(int o, t_place *****p);
int		ft_can_write15(int o, t_place *****p);
int		ft_can_write16(int o, t_place *****p);
int		ft_can_write17(int o, t_place *****p);
int		ft_can_write18(int o, t_place *****p);
int		ft_can_write19(int o, t_place *****p);

int		ft_check_tminos(char *str, int i);
int		ft_check_tminos1(char *str, int i);
int		ft_check_tminos2(char *str, int i);
int		ft_check_tminos3(char *str, int i);
int		ft_check_tminos4(char *str, int i);
int		ft_check_tminos5(char *str, int i);
int		ft_check_tminos6(char *str, int i);
int		ft_check_tminos7(char *str, int i);
int		ft_check_tminos8(char *str, int i);
int		ft_check_tminos9(char *str, int i);
int		ft_check_tminos10(char *str, int i);
int		ft_check_tminos11(char *str, int i);
int		ft_check_tminos12(char *str, int i);
int		ft_check_tminos13(char *str, int i);
int		ft_check_tminos14(char *str, int i);
int		ft_check_tminos15(char *str, int i);
int		ft_check_tminos16(char *str, int i);
int		ft_check_tminos17(char *str, int i);
int		ft_check_tminos18(char *str, int i);
int		ft_check_tminos19(char *str, int i);

#endif
