/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:11:01 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/21 02:58:49 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*cp_s;
	int		index;

	size = 0;
	while (s[size])
		size++;
	if (!(cp_s = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	index = 0;
	while (size > index)
	{
		cp_s[index] = s[index];
		index++;
	}
	cp_s[index] = '\0';
	return (cp_s);
}
