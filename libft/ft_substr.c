/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:14:11 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/26 14:50:16 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		ret = ft_calloc(1, sizeof(char));
		if (!ret)
			return (NULL);
	}
	else
	{
		new_len = ft_strlen(s + start);
		if (!(new_len < len))
			new_len = len;
		ret = (char *)malloc((new_len + 1) * sizeof(char));
		if (!ret)
			return (NULL);
		ret[new_len] = 0;
		while (new_len-- > 0)
			ret[new_len] = s[start + new_len];
	}
	return (ret);
}
