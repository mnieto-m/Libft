/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:31:08 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/12/17 07:31:51 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

size_t	ft_putnbr_pf(int n)
{
	size_t	count;

	count = 0;
	if (n == -2147483648)
		count += (write(1, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			count += (write(1, "-", 1));
			n = n * -1;
		}
		if (n > 9)
		{
			count += (ft_putnbr_pf(n / 10));
			n = n % 10;
		}
		if (n < 10)
			count += (ft_putchar_pf(n + 48));
	}
	return (count);
}
