/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:27:16 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/27 15:15:46 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (search[i] == '\0')
		return ((char *)src);
	while (src[i] != '\0')
	{
		j = 0;
		while (search[j] != '\0' && (src[i + j] == search[j]) && (i + j < len))
		{
			j++;
			if ((search[j] == '\0'))
			{
				return ((char *)&src[i]);
			}
		}
		i++;
	}
	return (0);
}

