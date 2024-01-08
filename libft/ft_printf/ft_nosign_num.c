/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nosign_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:24:31 by gpallare          #+#    #+#             */
/*   Updated: 2023/10/25 11:34:19 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_nosign_num(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i = ft_nosign_num(n / 10);
		if (i == -1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (ft_putchar(('0' + n)) == -1)
			return (-1);
		i++;
	}
	return (i);
}
