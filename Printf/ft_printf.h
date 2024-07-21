/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:28:39 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/07/02 19:09:10 by mnieto-m         ###   ########.fr       */
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

int		ft_printf(char const *flag, ...);
int		ft_putchar_pf(char c);
size_t	ft_putnbr_pf(int n);
size_t	ft_pointer_pf(void *flag);
size_t	ft_putunbr_base(size_t n, char *base);
size_t	ft_putstr_pf(char *s);
size_t	ft_strlen(const char *s);

#endif