/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:54:22 by gpallare          #+#    #+#             */
/*   Updated: 2023/12/20 11:40:07 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;
	size_t	j;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = len_dest;
	if (dest == src)
		return (0);
	if (size != 0 && i < (size - 1))
	{
		j = 0;
		while (i < (size - 1) && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	if (len_dest > size)
		return (size + len_src);
	return (len_dest + len_src);
}

/*int main (void)
{
	char dest[50] = "Hello";
	char src[50] = "World";
	printf("%zu\n", ft_strlcat(dest, src, 0));
	printf("%s\n", dest);
	return (0);
}*/
