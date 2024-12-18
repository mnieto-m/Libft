/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:36:44 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/12/18 13:55:49 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;
	size_t	i;

	i = 0;
	if (size != 0 && count > SIZE_MAX / size)
		return (0);
	a = (char *)malloc(count * size);
	if (!a)
		return (0);
	while (i < size * count)
	{
		((char *)a)[i] = 0;
		i++;
	}
	return (a);
}
