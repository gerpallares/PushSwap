/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:32:38 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/18 10:43:58 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*int	main(void)
{
	char *str = "ciao";
	char *str2 = ft_strdup(str);
	printf("%s\n", str2);
	return (0);
}*/
