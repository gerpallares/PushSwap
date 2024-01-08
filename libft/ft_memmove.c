/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:15:03 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/19 11:08:19 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*destptr;

	destptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	else
		while (n--)
			*(char *)dest++ = *(char *)src++;
	return (destptr);
}

/*int main(void)
{
	char unsigned	str[] = "hola";
	char unsigned	str2[] = "adeu";
	int	i;

	i = 0;
	ft_memmove(str, str2, 4);
	while (i < 4)
	{
		printf("%c", str[i]);
		i++;
	}
	
	return (0);
}*/
