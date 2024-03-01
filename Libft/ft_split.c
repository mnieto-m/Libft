/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:10:06 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/03/01 04:34:33 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lword(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	ft_nword(char const *s, char c)
{
	int	i;
	int	nword;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			nword++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (nword);
}
char	**ft_split(char const *s, char c)
{
	int		nword;
	int		i;
	char	**tab;

	i = 0;
	nword = ft_nword(s, c);
	tab = (char **)ft_calloc((nword + 1), sizeof(char *));
	if(!tab)
		return (0);
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