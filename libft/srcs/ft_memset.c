/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:21:44 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/22 12:03:33 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;
	size_t			i;

	d = b;
	i = 0;
	while (len > i)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
