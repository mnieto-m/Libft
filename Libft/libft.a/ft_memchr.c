/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:36:57 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/01 19:37:00 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	
	i = 0;
	str = (char *)s;
	while((str[i]) != '\0' || i < n)
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