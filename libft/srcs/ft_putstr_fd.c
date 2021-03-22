/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/07 09:49:38 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/22 14:15:18 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	len;

	if (str == NULL)
		return ;
	len = ft_strlen(str);
	write(fd, str, len);
}
