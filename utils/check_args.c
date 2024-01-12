/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:09:37 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/12 12:57:04 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_contains(int num, char **av, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atoi(av[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == ' ' || num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_check_args(int ac, char **av)
{
	int		i;
	long	tmp;
	char	**avs;

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
		tmp = ft_atoi(avs[i]);
		if (!ft_isnum(avs[i]))
			ft_printf("Error\n");
		if (ft_contains(tmp, avs, i))
			ft_printf("Error\n");
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_printf("Error\n");
		i++;
	}
	if (ac == 2)
		ft_free_all(avs);
}
