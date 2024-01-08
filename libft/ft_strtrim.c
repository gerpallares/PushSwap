/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:08:20 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/26 13:28:03 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_char(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_check_char(*start, set))
		++start;
	while (start < end && ft_check_char(*(end - 1), set))
		--end;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}
