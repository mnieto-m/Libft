/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:54:33 by mnieto-m          #+#    #+#             */
/*   Updated: 2025/07/23 13:17:42 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_token(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c) 
    {
        i++;
    }

	while (s[i])
	{
		if (s[i] != c)
		{
			if((s[i + 1] == c || s[i + 1] == '\0')&& s[i] != '\n')
			{
				
				printf("Posicion actual de la string:%s\n",&s[i]);
				printf("count antes de iterar:%i\n",count);
				count++;
				printf("count despues de iterar:%i\n",count);
			}	
			
		}
		i++;
		printf("Este es el valor de count al final de bucle:%i\n",count);
	}
	printf("count:%i\n",count);
	return (count);
}
