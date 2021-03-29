/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   draw_floors.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 10:30:11 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/29 16:21:31 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

/*
**		Draws the floors a solid color.
*/

void	draw_floors(t_data *mlx, t_image *cur_img)
{
	draw_solid_floors(mlx, cur_img);
}
