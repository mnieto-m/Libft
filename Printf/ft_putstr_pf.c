/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:33:18 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/07/02 19:16:33 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr_pf(char *s)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[i])
	{
		count += (write(1, &s[i], 1));
		i++;
	}
	return (count);
}
