/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:36:44 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/04/11 00:52:12 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	if (size != 0 && count > SIZE_MAX / size)
		return (0);
	a = (char *)malloc(count * size);
	if (!a)
		return (0);
	ft_bzero(a, count * size);
	return (a);
}
