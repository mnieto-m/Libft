/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:07:44 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/07/23 16:28:22 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_putunbr_base(size_t n, char *base)
{
	size_t len;
	size_t	count;
	count = 0;
	len = ft_strlen(base);
		if (n > (len - 1))
		{
			count += ft_putunbr_base((n / len), base);
			n = n % len;
		}
		if (n < len)
			count += ft_putchar(base[n]);
	return(count);
}
