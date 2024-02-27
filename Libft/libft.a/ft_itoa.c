/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:52:54 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/27 19:56:19 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	else
	{
		len = ft_len(n);
		str = (char *)ft_calloc((len + 1), 1);
		if (!str)
			return (0);
		if (n < 0)
		{
			str[0] = '-';
			n *= -1;
		}
		while (n > 9)
		{
			str[(len--) - 1] = (n % 10) + 48;
			n = n / 10;
		}
		if (n < 10)
			str[len - 1] = n + 48;
	}
	return (str);
}
