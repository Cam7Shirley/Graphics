/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:32:19 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/09 09:53:27 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <math.h>
# include "./libft/libft.h"

void	make_vert_line(void *mlxptr, void *winptr, int col_num, int col_len);
void	make_hor_line(void *mlxptr, void *winptr, int row_num, int row_len);

#endif
