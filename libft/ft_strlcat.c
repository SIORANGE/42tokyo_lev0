/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:12:06 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/06 09:56:19 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int index;
	unsigned int jndex;

	index = 0;
	while (dst[index] && index < dstsize)
		index++;
	jndex = 0;
	while (index + jndex + 1 < dstsize && src[jndex])
	{
		dst[index + jndex] = src[jndex];
		jndex++;
	}
	if (index != dstsize)
		dst[index + jndex] = '\0';
	while (src[jndex])
		jndex++;
	return (index + jndex);
}
