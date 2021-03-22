/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:04:40 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/22 11:56:08 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tdst;
	const unsigned char	*tsrc;
	size_t				i;

	tdst = dst;
	tsrc = src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n > i)
	{
		tdst[i] = tsrc[i];
		if (tsrc[i] == (unsigned char)c)
			return (tdst + i + 1);
		i++;
	}
	return (NULL);
}
