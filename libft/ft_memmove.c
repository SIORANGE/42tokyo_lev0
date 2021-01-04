/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:10:32 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/10 21:45:15 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	index;
	unsigned char	*dst_c;
	unsigned char	*src_c;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	index = 0;
	if (dst_c > src_c)
		while (len > 0)
		{
			dst_c[len - 1] = src_c[len - 1];
			len--;
		}
	else if (dst_c <= src_c)
		while (index < len)
		{
			dst_c[index] = src_c[index];
			index++;
		}
	return (dst);
}
