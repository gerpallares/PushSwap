/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:49:33 by gpallare          #+#    #+#             */
/*   Updated: 2023/10/25 12:03:42 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_var(char c, va_list elem);

static int	str_percent(char c, va_list elem)
{
	int	i;

	i = 0;
	if (c != '%')
	{
		i = type_var(c, elem);
		if (i == -1)
			return (-1);
		return (i);
	}
	else
	{
		if (write (1, &c, 1) != 1)
			return (-1);
		return (1);
	}
}

static int	str_write(const char *str, va_list elem, int k)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			k = k + str_percent(str[i + 1], elem);
			if (k == -1)
				return (-1);
			i++;
		}
		else
		{
			if (write (1, &str[i], 1) != 1)
				return (-1);
			k++;
		}
		i++;
	}
	return (k);
}

int	ft_printf(const char *str, ...)
{
	va_list	element;
	int		i;

	i = 0;
	va_start(element, str);
	i = str_write(str, element, i);
	va_end(element);
	return (i);
}

static int	type_var(char c, va_list elem)
{
	if (c == 'c')
		return (ft_putchar(va_arg(elem, int)));
	if (c == 's')
		return (ft_putstr(va_arg(elem, char *)));
	if (c == 'p')
		return (ft_punthex(va_arg(elem, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(elem, int)));
	if (c == 'u')
		return (ft_nosign_num(va_arg(elem, unsigned int)));
	if (c == 'x')
		return (ft_puthex_minus(va_arg(elem, int)));
	if (c == 'X')
		return (ft_puthex_mayus(va_arg(elem, int)));
	return (0);
}
