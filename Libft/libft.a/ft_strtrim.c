/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:41:50 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/22 19:47:34 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *dst;
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = ft_strlen(s1);
	while (i < j && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	k = j - i;
	dst = (char *)malloc(k + 1);
	if (!dst)
		return (NULL);
	ft_substr(s1, i, k);
	dst[k] = '\0';
}