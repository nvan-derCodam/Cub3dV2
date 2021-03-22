/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:19:34 by nvan-der      #+#    #+#                 */
/*   Updated: 2021/03/15 17:10:12 by nvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static int	skip(const char *str, int i)
{
	while (str[i] == '\t' || str[i] == '\x1b' || str[i] == ' ' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\e')
		i++;
	return (i);
}

static int	check_sign(const char *str, int i)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			return (-1);
		else
			return (1);
	}
	else
		return (1);
}

static long	ft_atoi2(const char *str, int sign, int i)
{
	long	res;

	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res >= 922337203685477580)
		{
			if ((sign == -1 && str[i] >= '9') || (sign == 1 && str[i] >= '8'))
			{
				if (sign == -1)
					return (0);
				else
					return (-1);
			}
			res = (res * 10) + (str[i] - '0');
			return ((int)res * sign);
		}
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	i = skip(str, 0);
	sign = check_sign(str, i);
	if (str[i] == '-' || str[i] == '+')
		i++;
	res = ft_atoi2(str, sign, i);
	return ((int)res * sign);
}
