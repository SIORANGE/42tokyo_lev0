/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakesat <takesat@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 03:24:57 by ktakesat          #+#    #+#             */
/*   Updated: 2020/10/11 04:45:10 by ktakesat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*array;

	if (!lst)
		return (NULL);
	array = NULL;
	while (lst)
	{
		if (!(list = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&list, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&array, list);
	}
	return (array);
}
