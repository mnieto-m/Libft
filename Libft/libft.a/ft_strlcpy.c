/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:57:54 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/13 16:11:53 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	int	i;

	i = 0;
	if (dstsize == '\0')
		return(ft_strlen(dst));
	if
	{
		while (src[i] != '\0' && (i < dstsize ))
		{
				dst[i] = src[i];
		i++;
		}
	}
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