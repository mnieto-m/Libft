/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:57:54 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/01/25 19:57:56 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == '\0')
		return(ft_strlen(src));
	while (src[i] != '\0' && (i  < dstsize))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/* #include <stdio.h>
int main(void)
{
	char src[100] = "eloi mort 200";
	char [100];
	ft_strlcpy( ,src);
	printf("%s", );
	return(0);
} */