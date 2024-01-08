/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:25:53 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/18 10:29:32 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char unsigned	*ptr;
	size_t			i;

	ptr = (char unsigned *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}

/*int main(void)
{
	char str[] = "hola com estem";
	memset(str, '$', 4);
	printf("%s", str);
	return (0);
}*/
