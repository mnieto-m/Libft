/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:54:33 by mnieto-m          #+#    #+#             */
/*   Updated: 2025/07/31 21:39:21 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_token(char *s, char c)
{
	int i;
	int count;
	i = 0;
	count = 0;
	while (s[i])
	{
		// saltar separadores
		while (s[i] == c || s[i] == '\n')
			i++;

		// si hay una palabra, contarla
		if (s[i] && s[i] != c && s[i] != '\n')
		{
			count++;
			while (s[i] && s[i] != c && s[i] != '\n')
				i++;
		}
	}
	return (count);
}
