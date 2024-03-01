/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:10:06 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/03/01 02:23:19 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int j, char const *s, char c)
{
	while (s[j] != '\0')
	{
		while (s[j] != c)
		{
			if (s[j] == '\0' || s[j] == c)
			{
				return (word);
			}
			j++;
		}
		j++;
	}
	return (0);
}
char	**ft_split(char const *s, char c)
{
	int	word;
	int	j;

	j = 0;
	word = 0;
	while (s[j] != '\0')
	{
		j += ft_len(j, s, c);
		printf("j: %d\n", j);
		word++;
	}
	printf("%d\n", word);
	return (0);
	//Cada vez que me devuelva j tengo que sumar word y reservar memoria para word.
}
/*int	main(void)
{
	char *s = "_____hola_que_tal_estas";
	char c = '_';
	char **tab;
	printf("%d\n", ft_len(0, s, c));
	tab = ft_split(s, c);
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	return (0);
}*/