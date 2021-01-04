/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:52:48 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/24 19:06:49 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_all_free(char **s)
{
	unsigned int index;

	index = 0;
	while (s[index])
	{
		free(s[index]);
		index++;
	}
	free(s);
	return (0);
}

int				res_length(const char *str, int pos, char c)
{
	int index;

	index = 0;
	while (str[pos + index] && str[pos + index] != c)
		index++;
	return (index);
}

unsigned int	ft_count_strnum(char const *s, char c)
{
	unsigned int	index;
	unsigned int	size;

	index = 1;
	size = 0;
	while (s[index])
	{
		if (s[index - 1] == c)
			if (s[index] != c)
				size++;
		index++;
	}
	return (size);
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		index;
	int		res_index;
	int		size;

	if (!s)
		return (NULL);
	res_index = 0;
	index = 0;
	if (!(res = malloc(sizeof(*res) * (ft_count_strnum(s, c) + 2))))
		return (0);
	while ((size_t)index < ft_strlen(s))
	{
		if (s[index] != c)
		{
			size = res_length(s, index, c);
			if (!(res[res_index] = ft_substr(s, index, size)))
				return (ft_all_free(res));
			index = index + size;
			res_index++;
		}
		index++;
	}
	res[res_index] = 0;
	return (res);
}
