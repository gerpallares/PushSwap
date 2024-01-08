/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:39:06 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/08 11:45:55 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	init_stack(t_list **stack, int ac, char **av)
{
	t_list	*new;
	char	**avs;
	int		i;

	i = 0;
	if (ac == 2)
		avs = ft_split(av[1], ' ');
	else
	{
		i = 1;
		avs = av;
	}
	while (avs[i])
	{
		new = ft_lstnew(ft_atoi(avs[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (ac == 2)
		ft_free(avs);
}

static void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (ac < 2)
		return (-1);
	ft_check_args(ac, av);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, ac, av);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	sort_stack(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
