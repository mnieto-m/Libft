/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:27:16 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/01/18 20:27:19 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *src, const char *search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (src[i] == '\0')
		return (0);
	if (search[i] == '\0')
		return ((char *)src);
	while (src[i] != '\0'  && (i < len))
	{
		j = 0;
		while (search[j] != '\0' && (src[i + j] == search[j]) ) 
		{
			if (search[j + 1] == '\0')
			{
				return ((char *)&src[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char src [50] = "eliman la informacion";
	char search[15] = "la informacion";
	size_t len = 30;
	printf("%s", ft_strnstr(src, search, len));
	
}