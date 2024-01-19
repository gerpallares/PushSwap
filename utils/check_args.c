/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:09:37 by gpallare          #+#    #+#             */
/*   Updated: 2024/01/19 13:01:12 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// static int	ft_contains(int num, char **av, int i)
// {
// 	i++;
// 	while (av[i])
// 	{
// 		if (ft_atoi(av[i]) == num)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-' || num[0] == '+')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	check_avs(char **avs)
{
	int		i;
	long	tmp;

	i = 0;
	while (avs[i])
	{
		if (!ft_isnum(avs[i]))
			break ;
		tmp = ft_atoi(avs[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
		{
			ft_printf("Error\n");
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_args(int ac, char **av)
{
	int		i;
	char	**avs;

	i = 1;
	if (ac == 2)
		avs = ft_split(av[1], ' ');
	else
		avs = av;
	check_avs(&avs[i]);
	if (ac == 2)
	{
		ft_free_all(avs);
		return (1);
	}
	return (0);
}
