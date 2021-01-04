/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:14:05 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/21 16:32:57 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int index_h;
	int	index_n;

	index_h = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[index_h])
	{
		index_n = 0;
		while (index_h + index_n < (int)len)
		{
			if (haystack[index_h + index_n] != needle[index_n])
				break ;
			index_n++;
			if (needle[index_n] == '\0')
				return ((char *)&haystack[index_h]);
		}
		index_h++;
	}
	return (NULL);
}
