/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_minus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:24:19 by gpallare          #+#    #+#             */
/*   Updated: 2023/10/25 12:15:17 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	puthex_long(char *bstr, unsigned long long n, int c)
{
	unsigned long long	i;

	i = ft_strlen(bstr);
	if (n >= i)
	{
		c = puthex_long(bstr, n / i, c);
		if (c == -1)
			return (-1);
		if (write (1, &bstr[n % i], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < i)
	{
		if (write (1, &bstr[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}

static int	puthexa_uns(char *bstr, unsigned int n, int c)
{
	unsigned int	i;

	i = ft_strlen(bstr);
	if (n >= i)
	{
		c = puthexa_uns(bstr, n / i, c);
		if (c == -1)
			return (-1);
		if (write (1, &bstr[n % i], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < i)
	{
		if (write (1, &bstr[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}

int	ft_puthex_minus(int n)
{
	int	i;

	i = 0;
	if (n >= 0)
		i = puthex_long(HEX_BASE_LOW, n, i);
	else if (n < 0)
		i = puthexa_uns(HEX_BASE_LOW, n, i);
	return (i);
}
