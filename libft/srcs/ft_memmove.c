/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 10:57:42 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/22 13:23:50 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tdst;
	const unsigned char	*tsrc;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	tdst = dst;
	tsrc = src;
	i = 0;
	if (tdst > tsrc && tdst < tsrc + len)
	{
		while (len > 0)
		{
			len--;
			tdst[len] = tsrc[len];
		}
	}
	while (len > i)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}
