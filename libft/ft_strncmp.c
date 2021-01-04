/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:13:56 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/09 13:40:37 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int index;

	index = 0;
	while (n > index && s1[index] && s2[index] &&
			(unsigned char)s1[index] == (unsigned char)s2[index])
		index++;
	if (index == n)
		return (0);
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
