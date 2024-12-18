/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mfree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:15:29 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/12/18 13:55:49 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mfree(int count, ...)
{
	int		index;
	void	**elem;
	va_list	args;

	index = 0;
	va_start(args, count);
	while (index < count)
	{
		elem = va_arg(args, void *);
		free(*elem);
		*elem = NULL;
		index++;
	}
	va_end(args);
}
