/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chartobin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:32:29 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/24 13:19:31 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../l_retry/libft.h"

char	*ft_binaire(char a)
{
	int		i;
	char	*octet;

	i = 0;
	if (!(octet = (char*)malloc(sizeof(char) * 9)))
		return (NULL);
	while (i < 8)
	{
		a = (a + '0') % 2;
		octet[i++] = a - '0';
	}
	return (octet);
}

int main()
{
	char 	*str = "coucou";
	char 	**strbin;
	size_t	i = 0;

	strbin = (char **)malloc(sizeof(char *) * ft_strlen(str));
	while (i < ft_strlen(str))
	{
		strbin[i] = ft_binaire(str[i]);
		i++;
	}
	strbin[i] = 0;
	ft_puttab(strbin);
}
