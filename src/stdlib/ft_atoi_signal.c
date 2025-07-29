/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_signal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:05:49 by mnieto-m          #+#    #+#             */
/*   Updated: 2025/07/29 19:49:31 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_signal(char *str, int *flag)
{
	int		i;
	int		sign;
	long	dest;

	i = 0;
	dest = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		dest = (dest * 10) + (str[i++] - '0');
		if ((sign * dest) > INT_MAX || (sign * dest) < INT_MIN)
		{
			*flag = -1;
			ft_putstr_fd("Error:\t Overflow detected", 1);
		}
	}
	return ((int)(dest * sign));
}
