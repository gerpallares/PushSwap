/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:36:21 by gpallare          #+#    #+#             */
/*   Updated: 2023/10/26 09:22:56 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	int_min(int n)
{
	(void)n;
	if (write(1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (int_min(n));
	if (n < 0 && ++i)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		n = -n;
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
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
