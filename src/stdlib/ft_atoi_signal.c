/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_signal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:05:49 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/08/30 19:47:06 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static void	print_error(const char *str)
{
	printf("Error:\t%s", str);
	exit(EXIT_FAILURE);
}

int	ft_atoi_signal(char *str)
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
		dest = (dest * 10) + (str[i++] - '0');
	if ((sign * dest) > INT_MAX || (sign * dest) < INT_MIN)
		print_error("Overflow detected");
	return ((int)(dest * sign));
}
