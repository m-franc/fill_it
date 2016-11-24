/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:14:28 by mfranc            #+#    #+#             */
/*   Updated: 2016/11/24 20:15:30 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef

# define FILLIT_H

typedef struct	s_list
{
	void	**piece;
	void	*tminos;
}				tminos;

typedef struct	s_list
{
	void	*piece;
	bool	contact;
}				piece;

# define BUFSIZE 21

# include "libft.h"

#endif
