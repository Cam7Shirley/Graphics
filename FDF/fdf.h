/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:32:19 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/10 14:08:02 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <math.h>
# include <fcntl.h>
# include "./libft/libft.h"

typedef struct	d_vector
{
	int			*data;
	size_t		size;
	size_t		current;
}				vector;

//	Function to manipulate size variable based on what is added/removed from the vector using the ft_realloc function.
//	Functions to create/delete vector variables.
//	Functions to add/remove elements to the vector variables.
void			make_vert_line(void *mlxptr, void *winptr, int col_num, int col_len);
void			make_hor_line(void *mlxptr, void *winptr, int row_num, int row_len);

#endif
