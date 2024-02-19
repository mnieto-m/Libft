/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:49:14 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/19 18:52:34 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dst;
	size_t i;
	size_t j;

	while (i == (start + i))
	{
		if (i == len)
		{
			dst = '\0';
			return (dst);
		}
		dst[i] = s[j];
		i++;
		j++;
	}
	return(0);
}