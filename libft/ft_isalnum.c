/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:13:31 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/18 12:41:29 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*int	main(void)
{
	int val1 = '2';
    int val2 = 'g';
    
if(ft_isalnum(val1))
   printf("The character is alphanumeric\n");
else
	printf("The character is not alphanumeric\n");
if(ft_isalnum(val2))
   printf("The character is alphanumeric\n");
  else
   printf("The character is not alphanumeric\n");
	
	return (0);
}*/
