/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:56:16 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/12 10:11:52 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*changed_lst;
	t_list	*changed_node;

	changed_lst = NULL;
	while (lst)
	{
		changed_node = ft_lstnew(f(lst->value));
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
