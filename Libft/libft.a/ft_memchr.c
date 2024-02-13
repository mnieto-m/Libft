/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:36:57 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/13 01:02:19 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	
	str = (char *)s;
	i = 0;
	while(i < n)
	{
		if((str[i]) == (char)c)
		{
			return(&str[i]);
		}
		i++;
	}
	return(0);
}

/*int main()
{
	char s[90] = " me ha llamdo el tetico";
	int c = 't';
	size_t n = 2;
	printf("%s",ft_memchr(s, c, n));
}*/