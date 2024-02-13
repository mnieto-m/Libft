/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:58:07 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/13 16:55:55 by mnieto-m         ###   ########.fr       */
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
	while (dst[i] != '\0' && (i < dstsize - 1))
	{
		i++;
	}
	j = i;
	while (src[j] != '\0' && (j < dstsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst));
}

/*int	main ()
{
	char dst[50] = "eres un pesado" ;
	char src[100] = ", bueno ya no ";
	size_t dstsize = 50;
	printf("%zu",ft_strlcat(src, dst, dstsize));
}*/