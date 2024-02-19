/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:00:24 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/19 22:24:13 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len;
	i = 0;
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (0);
	if (start >= s_len)
	{
		dst[i] = '\0';
		return (dst);
	}
	while (i < len)
	{
		dst[i] = s[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
