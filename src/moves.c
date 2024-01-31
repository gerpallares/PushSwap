/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:49:14 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/31 10:49:50 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* Swap the first 2 elements at the top of a stack */
void	node_swap(t_stack **head)
{
	t_stack	*temp;

	temp = (*head)->next;
	(*head)->next = (*head)->next->next;
	temp->next = (*head);
	(*head) = temp;
}

void	rotate(t_stack **head)
{
	t_stack	*temp;
	t_stack	*last;

	temp = *head;
	(*head) = (*head)->next;
	temp->next = NULL;
	last = last_node(*head);
	last->next = temp;
}

void	rev_rotate(t_stack **head)
{
	t_stack	*last;
	t_stack	*second_last;

	last = last_node(*head);
	second_last = second_last_node(*head);
	second_last->next = NULL;
	last->next = *head;
	*head = last;
}

void	push_to(t_stack **src_head, t_stack **dst_head, char list)
{
	t_stack	*tmp;

	tmp = *src_head;
	*src_head = (*src_head)->next;
	if (*dst_head == NULL)
	{
		*dst_head = tmp;
		(*dst_head)->next = NULL;
	}
	else
	{
		tmp->next = *dst_head;
		*dst_head = tmp;
	}
	write(1, "p", 1);
	write(1, &list, 1);
	write(1, "\n", 1);
}

// Controls which operation to do and to which stack
void	move(void (*operation)(t_stack**), t_stack **head, char list)
{
	if (!head)
		return ;
	operation(head);
	if (operation == node_swap)
		write(1, "s", 1);
	else if (operation == rotate)
		write(1, "r", 1);
	else if (operation == rev_rotate)
		write(1, "rr", 2);
	write(1, &list, 1);
	write(1, "\n", 1);
}
