/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:36:41 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/18 12:42:24 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int	main(void)
{
	int text1 = '2';
  	int text2 = 't';
  
	if( ft_isdigit(text1) ) {
      printf("var1 = |%c| is a digit\n", text1 );
   	} else {
      printf("var1 = |%c| is not a digit\n", text1 );
   	}
   
   	if( ft_isdigit(text2) ) {
      printf("var2 = |%c| is a digit\n", text2 );
   	} else {
      printf("var2 = |%c| is not a digit\n", text2 );
   	}
	return (0);	
}*/
