/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:10:05 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/06 01:04:08 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *sc;

	sc = (unsigned char *)s;
	while (n > 0)
	{
		if (*sc == (unsigned char)c)
			return ((void *)sc);
		sc++;
		n--;
	}
	return (NULL);
}
