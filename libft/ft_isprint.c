/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:21:09 by gpallare          #+#    #+#             */
/*   Updated: 2023/09/18 12:25:49 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	int text1 = '2';
  	int text2 = '\t';
  
	if( ft_isprint(text1) ) {
      printf("var1 = |%c| is printable\n", text1 );
   	} else {
      printf("var1 = |%c| is not printable\n", text1 );
   	}
   
   	if( ft_isprint(text2) ) {
      printf("var2 = |%c| is printable\n", text2 );
   	} else {
      printf("var2 = |%c| is not printable\n", text2 );
   	}
	return (0);
}*/
