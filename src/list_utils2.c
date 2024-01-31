/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:47:14 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/31 11:28:46 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Returns the node with the highest value
t_stack	*get_max(t_stack *stack)
{
	int		max_val;
	t_stack	*max_node;

	if (!stack)
		return (NULL);
	max_val = INT_MIN;
	while (stack)
	{
		if (stack->val > max_val)
		{
			max_val = stack->val;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

// Returns the node with the lowest value
t_stack	*get_min(t_stack *stack)
{
	int		min_val;
	t_stack	*min_node;

	if (!stack)
		return (NULL);
	min_val = INT_MAX;
	while (stack)
	{
		if (stack->val < min_val)
		{
			min_val = stack->val;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

// Checks if given stack is sorted in ascending order
bool	check_if_ascending(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->val > stack->next->val)
			return (false);
		stack = stack->next;
	}
	return (true);
}

// Checks if given stack is sorted in descending order
bool	check_if_descending(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->val < stack->next->val)
			return (false);
		stack = stack->next;
	}
	return (true);
}
