/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:00:24 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/19 20:35:34 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	dst = (char *)malloc(len + 1);
	if (!dst && !s)
		return (0);
	i = 0;
	while (i < len)
	{
		dst[i] = s[i + start];
	}
	dst[i] = '\0';
	return (dst);
}
