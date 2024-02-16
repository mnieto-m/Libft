/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:36:44 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/16 14:49:01 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	a = (char *)malloc(count * size);
	if(size != 0 && count > SIZE_MAX / size)
		return(NULL);
	if (a)
	{
		ft_bzero(a, count * size);
		return (a);
	}
	return (0);
}




