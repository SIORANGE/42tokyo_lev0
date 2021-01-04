/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:15:35 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/25 07:16:15 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t				beginning;
	size_t				end;

	if (!s1 || !set)
		return (NULL);
	beginning = 0;
	while (s1[beginning] && ft_strchr(set, s1[beginning]))
		beginning++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	if (beginning > end)
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, beginning, end - beginning + 1));
}
