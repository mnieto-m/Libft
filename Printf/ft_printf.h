/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:28:39 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/11/11 23:38:12 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "./../libft.h"

int		ft_printf(char const *flag, ...);
int		ft_putchar_pf(char c);
size_t	ft_putnbr_pf(int n);
size_t	ft_pointer_pf(void *flag);
size_t	ft_putstr_pf(char *s);

#endif