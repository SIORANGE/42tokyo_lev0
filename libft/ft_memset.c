/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:10:38 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/05 19:20:37 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *sc;

	sc = (unsigned char *)s;
	while (n > 0)
	{
		*sc = c;
		sc++;
		n--;
	}
	return (s);
}
