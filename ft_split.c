/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:10:06 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/03/02 23:59:59 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numbword(char const *s, char c)
{
	int	i;
	int	numbword;

	i = 0;
	numbword = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			numbword++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (numbword);
}

char	**ft_split(char const *s, char c)
{
	int		numbword;
	int		lword;
	int		i;
	char	**tab;

	i = 0;
	numbword = ft_numbword(s, c);
	tab = (char **)ft_calloc((numbword + 1), sizeof(char *));
	if (!tab || !s)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				lword = ft_strlen(s);
			else
				lword = ft_strchr(s, c) - s;
			tab[i++] = ft_substr(s, 0, lword);
			s += lword;
		}
	}
	return (tab);
}

int	main(void) 
{
	char *s = "_____hola_que_tal_estas";
	char c = '_';
	char **tab;
	tab = ft_split(s, c);
	return (0);
} 