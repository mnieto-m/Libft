/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:44:32 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/08/29 17:16:41 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_pointer(void *flag)
{
	size_t	count;

	count = 0;
	if (flag == NULL)
		count += (write(1, "(nil)", 5));
	else
	{
		count += (write(1, "0x", 2));
		count += (ft_putunbr_base((size_t)flag, "0123456789ABCDF"));
	}
	return (count);
}
