/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:37:08 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/13 16:45:17 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	 i;
	unsigned char *str1 ;
	unsigned char *str2 ;
	
	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while(i < n)
	{
		if((str1[i]) != (str2 [i]))
		{
			return((str1[i]) - (str2[i]));
		}
		i++;
	}
	return (0);
}
/*int main ()
{
	char s1[89]= "Al";
	char s2[89]= "J";
	size_t n = 20;
	printf("%d",ft_memcmp(s1, s2, n));
}*/