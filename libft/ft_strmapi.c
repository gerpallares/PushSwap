/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:39:23 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/26 11:40:51 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	ret = (char *)malloc(ft_strlen(((char *)s)) + 1);
	if (!s || ret == NULL)
		return (NULL);
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
