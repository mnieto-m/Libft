/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:39:33 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/03/10 17:36:47 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*strdst;
	char	*strsrc;

	strdst = (char *)dst;
	strsrc = (char *)src;
	if (!dst && !src && len)
		return (0);
	if (src > dst)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len > 0)
		{
			(strdst)[len - 1] = (strsrc)[len - 1];
			len--;
		}
	}
	return (dst);
}
