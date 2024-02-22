/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:41:50 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/22 21:29:30 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *dst;
	size_t i;
	size_t size;
	size_t final;

	dst = NULL;
	if(s1 != NULL && set != NULL)
	{
		i = 0;
		size = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while ( s1[size -1] && size > i && ft_strrchr(set, s1[size - 1]))
			size--;
		final = size - i;
		dst = (char *)malloc(final + 1);
		if (!dst)
			return (NULL);
		ft_strlcpy(dst, s1 + i, final + 1);
	}
	return (dst);
}