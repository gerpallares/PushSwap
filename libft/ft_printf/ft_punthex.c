/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punthex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:00:49 by gpallare          #+#    #+#             */
/*   Updated: 2023/10/26 09:25:08 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_pointer(char *bstr, unsigned long long n, int c)
{
	unsigned long long	i;

	i = ft_strlen(bstr);
	if (n >= i)
	{
		c = hex_pointer(bstr, n / i, c);
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

int	ft_punthex(void *p)
{
	unsigned long long	ptr;
	int					i;

	i = 0;
	ptr = (unsigned long long)p;
	if (write (1, "0x", 2) == -1)
		return (-1);
	i = hex_pointer(HEX_BASE_LOW, ptr, i);
	if (i == -1)
		return (-1);
	i += 2;
	return (i);
}
