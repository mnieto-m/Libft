/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:00:24 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/20 16:37:23 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
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
} */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		rlen;
	char	*ret;

	i = 0;
	if (ft_strlen(s) >= start + len)
		rlen = len;
	else if (start > ft_strlen(s))
		rlen = 0;
	else
		rlen = ft_strlen(s) - start;
	ret = malloc(sizeof(char) * rlen + 1);
	if (!(ret))
		return (NULL);
	while (i < rlen)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
