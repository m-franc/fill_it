#ifndef FILLIT_H

# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

# define BUFSIZE 545

typedef int F(char *, int);

char	*ft_get_file(int fd);
int		ft_check_file(char *str);
void	ft_exit();
int		ft_get_map(char *str);
int		*ft_check_tminos(char *str);
int		*ft_check_map(char *str);
char	**ft_check(int fd);
char	**ft_settab(int size/*, int *tminos*/);
char	*puttab(int *tminos, char **tab);
int		ft_set_size_tab(int nb_map);
char	**ft_columnew(size_t n);
char	*ft_linenew(size_t n, int c);
int		*ft_check(int fd);
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
