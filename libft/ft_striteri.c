/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:05:14 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/26 12:09:24 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (s != ((void *)0) && f != ((void *)0))
	{
		i = ft_strlen(s);
		while (k < i)
		{
			(*f)(k, s);
			s++;
			k++;
		}
	}
}
