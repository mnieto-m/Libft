/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:41:50 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/27 19:57:09 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;
	size_t	size;
	size_t	final;

	dst = 0;
	i = 0;
	if (s1[0] == '\0')
		return (ft_calloc(1, 1));
	if (set)
	{
		size = ft_strlen(s1);
		while (s1[i] != '\0' && ft_strchr(set, s1[i]))
			i++;
		while ((s1[size - 1] && size > i) && (ft_strrchr(set, s1[size - 1])))
			size--;
		final = size - i;
		dst = (char *)malloc(final + 1);
		if (!dst)
			return (0);
		ft_strlcpy(dst, ((char *)s1 + i), final + 1);
	}
	return (dst);
}
