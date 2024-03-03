/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:10:06 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/03/03 18:59:15 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_dfree(char **tab, int i)
{
	while (i)
	{
		free(tab[i - 1]);
		i--;
	}
	free(tab);
}

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
	int		lword;
	int		i;
	char	**tab;

	i = -1;
	tab = (char **)ft_calloc((ft_numbword(s, c) + 1), sizeof(char *));
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
			tab[++i] = ft_substr(s, 0, lword);
			if (!tab[i])
				return (ft_dfree(tab, i), NULL);
			s += lword;
		}
	}
	return (tab);
}

/*   int	main(void) 
{
	char *s = "xxxxxxxxhello!";
	char c = ' ';
	char **tab;
	tab = ft_split(s, c);
	return (0);
} */