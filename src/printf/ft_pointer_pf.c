/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:44:32 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/12/18 13:54:18 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_pointer_pf(void *flag)
{
	size_t	count;

	count = 0;
	if (flag == NULL)
	{
		count += (write(1, "(nil)", 5));
	}
	else
	{
		count += (write(1, "0x", 2));
		count += (ft_putunbr_base((size_t)flag, "0123456789abcdef"));
	}
	return (count);
}
