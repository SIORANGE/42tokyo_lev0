/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 07:15:17 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/25 07:15:31 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	c1;
	char	c2;

	if ((unsigned char)c <= 0b01111111)
	{
		write(fd, &c, 1);
	}
	else
	{
		c1 = (unsigned char)c & 0b11000000;
		c2 = (unsigned char)c & 0b00111111;
		c1 = (unsigned char)c1 >> 6;
		c1 = (unsigned char)c1 | 0b11000000;
		c2 = (unsigned char)c2 | 0b10000000;
		write(fd, &c1, 1);
		write(fd, &c2, 1);
	}
}
