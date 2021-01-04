/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:10:45 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/08 23:00:35 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			return ((char *)&s[index]);
		index++;
	}
	if (c == '\0')
		return ((char *)&s[index]);
	return (NULL);
}
