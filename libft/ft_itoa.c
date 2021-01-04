/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 02:07:30 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/24 13:47:30 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_num_of_dig(long long n)
{
	int	digits;

	if (n < 0)
	{
		digits = 1;
		n *= -1;
	}
	else
	{
		digits = 0;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char			*ft_itoa(int n)
{
	char		*nums;
	int			index;
	int			size;
	long		num;

	num = (long long)n;
	size = ft_num_of_dig((long long)num);
	if (!(nums = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	nums[size] = '\0';
	index = size - 1;
	if (num < 0)
	{
		nums[0] = '-';
		num *= -1;
	}
	if (num == 0)
		nums[0] = '0';
	while (num > 0)
	{
		nums[index] = num % 10 + '0';
		num /= 10;
		index--;
	}
	return (nums);
}
