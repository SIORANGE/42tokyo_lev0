/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:42:58 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/10 20:04:26 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int index;

	index = 0;
	while (s[index])
		index++;
	while (index >= 0)
	{
		if (s[index] == c)
			return ((char *)&s[index]);
		index--;
	}
	return (NULL);
}
