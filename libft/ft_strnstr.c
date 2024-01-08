/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:02:40 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/19 11:17:15 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	j;

	if (!str && !n)
		return (NULL);
	if (!*to_find)
		return ((char *)str);
	while (*str && n--)
	{
		j = 0;
		while (*(str + j) == *(to_find + j) && *(to_find + j) && j <= n)
		{
			if (!*(to_find + j + 1))
				return ((char *)str);
			j++;
		}
		str++;
	}
	return (NULL);
}

/*size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char *)str);
	if (str == NULL && n == 0)
		return (NULL);
	while (str[i] != '\0' && i < n)
	{
		while (str[i + j] == to_find[j] && i + j < n)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (0);*/
/*int	main(void)
{
	char	str[] = "holapeho";
	char	to_find[] = "pe";
	char	*ptr;

	ptr = ft_strnstr(str, to_find, 4);
	printf("%s", ptr);
	return (0);
}*/
