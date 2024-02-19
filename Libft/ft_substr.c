/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:49:14 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/17 20:52:10 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dst;
	size_t i;

	while (i< len)
	{
		dst[i] =  s[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
