/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:07:44 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/21 13:36:19 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_base(unsigned int n, char *base, int *count)
{
	unsigned int len;

	len = ft_strlen(base);
		if (n > (len - 1))
		{
			ft_putunbr_base((n / len), base,count);
			n = n % len;
		}
		if (n < len)
			ft_putchar_pf(base[n], count);
}
