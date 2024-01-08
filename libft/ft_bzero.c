/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:12:38 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/14 11:52:26 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char unsigned	*ptr;
	size_t			i;

	ptr = (char unsigned *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char unsigned	str[] = "ciao";
	int				i;

	i = 0;
	ft_bzero(str, 3);
	while (i < 4)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}*/
