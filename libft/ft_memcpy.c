/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:52:46 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/19 11:15:33 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	void	*destptr;

	destptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (destptr);
}

/*int	main(void)
{
	char unsigned	str[] = "hola";
	char unsigned	str2[] = "adeu";
	int	i;

	i = 0;
	ft_memcpy(str, str2, 3);
	while (i < 4)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}*/
