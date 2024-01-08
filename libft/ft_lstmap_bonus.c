/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:56:16 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/28 14:48:43 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*changed_lst;
	t_list	*changed_node;

	changed_lst = NULL;
	while (lst)
	{
		changed_node = ft_lstnew(f(lst->content));
		if (!changed_node)
		{
			ft_lstclear(&changed_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&changed_lst, changed_node);
		lst = lst->next;
	}
	return (changed_lst);
}
