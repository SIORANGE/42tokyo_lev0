/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:09:51 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/05 17:40:29 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *dest_c;
	char *src_c;

	dest_c = (char *)dest;
	src_c = (char *)src;
	while (n > 0)
	{
		*dest_c = *src_c;
		if (*src_c == (char)c)
			return (dest_c + 1);
		dest_c++;
		src_c++;
		n--;
	}
	return (NULL);
}
