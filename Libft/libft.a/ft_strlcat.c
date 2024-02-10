/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:58:07 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/01/25 19:58:10 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst[i] == '\0')
		return(ft_strlen(src));
	while (dst[i] != '\0' && (i + 1< dstsize))
	{
		i++;
	}
	while (src[j] != '\0' && (i + j +1 < dstsize))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i + 1] = '\0';
	return (i);
}

/*int	main ()
{
	char dst[50] = "eres un pesado" ;
	char src[100] = ", bueno ya no ";
	size_t dstsize = 50;
	printf("%zu",ft_strlcat(src, dst, dstsize));
}*/