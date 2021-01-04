/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 02:45:14 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/11 03:09:05 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list			*nex;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		nex = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = nex;
	}
}
