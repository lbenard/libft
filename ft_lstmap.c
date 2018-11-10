/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 23:15:24 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/09 12:49:26 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list	*head;
	t_list	*start;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	if (!(start = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	free(tmp);
	head = start;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		if (!(head->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		free(tmp);
		lst = lst->next;
		head = head->next;
	}
	return (start);
}
