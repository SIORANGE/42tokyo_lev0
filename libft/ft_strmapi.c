/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 11:38:14 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/25 07:15:57 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*ans;

	if (!s || !f)
		return (NULL);
	if (!(ans = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	index = 0;
	while (index < (unsigned int)ft_strlen(s))
	{
		ans[index] = f(index, s[index]);
		index++;
	}
	ans[index] = '\0';
	return (ans);
}
