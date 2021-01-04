/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:10:23 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/10 20:04:06 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dest_c;
	unsigned char *src_c;

	dest_c = (unsigned char*)dest;
	src_c = (unsigned char*)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		*dest_c = *src_c;
		src_c++;
		dest_c++;
		n--;
	}
	return (dest);
}
