/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:11:11 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/25 07:14:50 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	index_1;
	unsigned int	index_2;
	unsigned int	size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	index_1 = 0;
	index_2 = 0;
	while (s1[index_1])
	{
		str[index_1] = s1[index_1];
		index_1++;
	}
	while (s2[index_2])
	{
		str[index_2 + index_1] = s2[index_2];
		index_2++;
	}
	str[index_2 + index_1] = '\0';
	return (str);
}
