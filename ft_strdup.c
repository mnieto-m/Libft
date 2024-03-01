/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:39:56 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/26 00:18:33 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	i = ft_strlen(s1) + 1;
	dst = (char *)malloc(i);
	if (dst == 0)
		return (0);
	ft_memcpy(dst, s1, i);
	return (dst);
}
