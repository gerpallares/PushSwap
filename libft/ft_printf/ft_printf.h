/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:41:55 by gpallare          #+#    #+#             */
/*   Updated: 2023/12/20 12:39:17 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

# define HEX_BASE_UPP "0123456789ABCDEF"
# define HEX_BASE_LOW "0123456789abcdef"

int				ft_printf(char const *str, ...);

int				ft_putchar(int c);
int				ft_putstr(char *str);
int				ft_puthex_mayus(int n);
int				ft_puthex_minus(int n);
int				ft_punthex(void *p);
int				ft_putnbr(int n);
int				ft_punthex(void *p);
unsigned int	ft_nosign_num(unsigned int n);

#endif
