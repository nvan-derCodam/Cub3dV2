/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 09:46:43 by rpet          #+#    #+#                 */
/*   Updated: 2021/03/18 01:41:16 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
