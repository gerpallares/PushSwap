/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:59:46 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/19 11:33:02 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*i;

	i = NULL;
	while (*str)
	{
		if (*str == (char)c)
			i = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)i);
}

/*int	main(void)
{
	char	str[] = "holass";
	printf("%s\n", ft_strrchr(str, 'a'));
	return (0);
}*/
