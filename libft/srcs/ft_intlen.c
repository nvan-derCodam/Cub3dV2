/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 12:55:54 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/15 17:23:38 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(long long n)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i + neg);
}
