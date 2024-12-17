/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:24:35 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/12/17 07:31:44 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_checker(va_list args, const char *flag)
{
	if (*flag == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	else if (*flag == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	else if (*flag == 'p')
		return (ft_pointer_pf(va_arg(args, void *)));
	else if (*flag == 'd')
		return (ft_putnbr_pf(va_arg(args, int)));
	else if (*flag == 'i')
		return (ft_putnbr_pf(va_arg(args, int)));
	else if (*flag == 'u')
		return (ft_putunbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (*flag == 'x')
		return (ft_putunbr_base(va_arg(args, unsigned int),
				"0123456789abcdef"));
	else if (*flag == 'X')
		return (ft_putunbr_base(va_arg(args, unsigned int),
				"0123456789ABCDEF"));
	else if (*flag == '%')
		return (ft_putchar_pf(*flag));
	return (-1);
}

int	ft_printf(const char *flag, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, flag);
	while (flag[i] != '\0')
	{
		if (flag[i] == '%' && flag[i + 1] != '\0')
			count += ft_checker(args, &flag[++i]);
		else if (flag[i] == '%' && flag[i + 1] == '\0')
			return (count);
		else
			count += ft_putchar_pf(flag[i]);
		i++;
	}
	va_end(args);
	return (count);
}
