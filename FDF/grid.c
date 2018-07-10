/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:27:18 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/06 10:36:24 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	make_vert_line(void *mlxptr, void *winptr, int col_num, int col_len)
{
	int	index;

	index = 0;
	while (index <= col_len)
	{
		mlx_pixel_put(mlxptr, winptr, index, col_num, 10000);
		index++;
	}
}

void	make_hor_line(void *mlxptr, void *winptr, int row_num, int row_len)
{
	int	index;

	index = 0;
	while (index <= row_len)
	{
		mlx_pixel_put(mlxptr, winptr, row_num, index, 10000);
		index++;
	}
}
