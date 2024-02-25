/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:52:54 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/25 23:38:44 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	ft_len(int *aux, int *len)
{
	while (*aux / 10 != '\0')
	{
		len++;
		aux = *aux / 10;
	}
	while ()
	{
		/* code */
	}
}
char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	int		aux;
	char	*str;

	aux = n;
	len = 0;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
}
