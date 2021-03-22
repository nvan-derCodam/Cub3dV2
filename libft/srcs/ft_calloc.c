/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 12:31:16 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/22 14:14:33 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned char	*res;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	res = (unsigned char *)ptr;
	ft_bzero(res, (count * size));
	return (ptr);
}
