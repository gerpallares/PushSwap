/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:03:35 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/26 10:04:32 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!size)
		return (i);
	while (--size && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}

/*int main(void)
{
	char dest[50] = "Hello";
	char src[50] = "World";
	printf("%zu\n", ft_strlcpy(dest, src, 0));
	printf("%s\n", dest);
	return (0);
}*/
