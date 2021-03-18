/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:19:52 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/18 02:53:15 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*ret;

	i = 0;
	ret = (char*)haystack;
	if (needle[i] == '\0')
		return (ret);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > i + j)
		{
			j++;
			if (!needle[j] == '\0')
				return ((char*)haystack + i);
		}
		i++;
		len--;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t		i;
// 	size_t		j;
// 	char		*ret;

// 	i = 0;
// 	ret = (char*)haystack;
// 	if (needle[i] == '\0')
// 		return (ret);
// 	while (haystack[i] != '\0' && len > 0)
// 	{
// 		j = 0;
// 		while (haystack[i] == needle[j] && len > j)
// 		{
// 			if (needle[j + 1] == '\0')
// 				return (ret + (i - j));
// 			i++;
// 			j++;
// 		}
// 		i = i - j;
// 		i++;
// 		len--;
// 	}
// 	return (NULL);
// } BACKUP TODO (ignore this this is an backup from old code that worked -
// -fluently but made some changes to improve performance.)
