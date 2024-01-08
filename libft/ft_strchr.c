/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:00:35 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/19 11:24:44 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

/*int	main(void)
{
	char	str[] = "holacomoestas";
	char	*ptr;

	ptr = ft_strchr(str, 'a');
	printf("%s", ptr);
	return (0);
}*/
