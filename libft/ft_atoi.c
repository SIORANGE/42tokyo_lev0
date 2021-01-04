/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:08:54 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/25 02:53:33 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_isspace(const char c)
{
	static int		checker;
	static char		spaces[7];
	unsigned int	index;

	index = 0;
	if (!checker)
	{
		ft_strlcat(spaces, "\t\n\v\f\r ", 7);
		checker++;
	}
	while (spaces[index] != '\0')
	{
		if (c == spaces[index])
			return (1);
		index++;
	}
	return (0);
}

static int			ft_is_overflow(const char *str, char sign)
{
	static char		long_max[20];
	static char		long_min[20];
	unsigned int	index;

	ft_strlcat(long_max, "9223372036854775807", 20);
	ft_strlcat(long_min, "9223372036854775808", 20);
	index = 0;
	while (str[index])
	{
		if (long_max[index] > str[index] && sign == 1)
			return (1);
		else if (long_max[index] < str[index] && sign == 1)
		{
			return (-1);
		}
		if (long_min[index] > str[index] && sign == -1)
			return (1);
		else if (long_min[index] < str[index] && sign == -1)
		{
			return (0);
		}
		index++;
	}
	return (1);
}

static int			ft_num_len(const char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] >= '0' && str[index] <= '9')
		index++;
	return (index);
}

int					ft_atoi(const char *str)
{
	long long			ans;
	int					sign;

	ans = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	if (ft_num_len(str) > 19)
		return (sign == 1 ? -1 : 0);
	if (ft_num_len(str) == 19 && ft_is_overflow(str, sign) != 1)
		return (ft_is_overflow(str, sign));
	while (*str >= '0' && *str <= '9')
	{
		ans *= 10;
		ans += *str - '0';
		str++;
	}
	return (sign * (int)ans);
}
