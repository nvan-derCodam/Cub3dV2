/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_2.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/05 10:32:31 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/04/05 10:42:41 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/cub3d.h"

void	set_face_direction_NS(t_data *mlx, int y, int x)
{
	mlx->ray.dir.x = 0;
	mlx->ray.plane.y = 0;
	if (mlx->map.map[y][x] == 'N')
		mlx->ray.dir.y = -1;
	else
		mlx->ray.dir.y = 1;
	if (mlx->map.map[y][x] == 'N')
		mlx->ray.plane.x = 0.66;
	else
		mlx->ray.plane.x = -0.66;
}

void	set_face_direction_WE(t_data *mlx, int y, int x)
{
	mlx->ray.dir.y = 0;
	mlx->ray.plane.x = 0;
	if (mlx->map.map[y][x] == 'W')
		mlx->ray.dir.y = -1;
	else
		mlx->ray.dir.y = 1;
	if (mlx->map.map[y][x] == 'W')
		mlx->ray.plane.x = 0.66;
	else
		mlx->ray.plane.x = -0.66;
}
