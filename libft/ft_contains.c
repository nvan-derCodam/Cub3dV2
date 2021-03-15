/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_contains.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 14:23:11 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/15 17:30:56 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcontains(char *str, char *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (str == NULL || set == NULL)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == set[0])
		{
			while (set[j] != '\0')
			{
				if (str[i + j] != set[j])
					break ;
				if (j == ft_strlen(set) - 1)
					return (1);
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
