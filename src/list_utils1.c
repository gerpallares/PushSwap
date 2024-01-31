/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:46:41 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/31 10:47:06 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_exit_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

t_stack	*create_new_node(int val)
{
	t_stack	*new_node;

	new_node = ft_calloc(1, sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->val = val;
	new_node->has_index = false;
	new_node->next = NULL;
	return (new_node);
}

/* returns the last node of a linked list */
t_stack	*last_node(t_stack *head)
{
	while (head && head->next)
		head = head->next;
	return (head);
}

/* returns the second last node of a linked list */
t_stack	*second_last_node(t_stack *head)
{
	while (head && head->next && head->next->next)
		head = head->next;
	return (head);
}

/* counts the number of nodes in the linked list */
int	ft_list_size(t_stack *list)
{
	int	size;

	size = 0;
	while (list != NULL)
	{
		list = list->next;
		size++;
	}
	return (size);
}
