/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_functions.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 18:01:18 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/29 16:22:43 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/cub3d.h"

void	error_message(char *str)
{
	ft_putstr_fd("Error\n", 1);
	ft_putendl_fd(str, 1);
	exit(1);
}

void	error_handling(char *str, t_data *mlx)
{
	destroy_textures(mlx);
	free_sprite_array(mlx);
	free_map(mlx);
	destroy_mlx(mlx);
	error_message(str);
}
