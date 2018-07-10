/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 08:56:50 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/09 13:45:46 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(void)
{
	int		rl = 1000;
	int		cl = 1000;
	int		row = 50;
	int		col = 50;
	void	*mlx = mlx_init();
	void	*win = mlx_new_window(mlx, rl, cl, "Deez_Nuts");

	while (row < rl)
	{
		make_hor_line(mlx, win, row, rl);
		row += 50;
	}
	while (col < cl)
	{
		make_vert_line(mlx, win, col, cl);
		col += 50;
	}
	mlx_loop(mlx);
	return (0);
}
