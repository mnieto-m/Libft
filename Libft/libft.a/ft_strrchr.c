/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:40:07 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/01 19:40:09 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[i] != '\0')
	{
		i++;
	}
	while(i >= 0)
	{
		if(s[i] != c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}
int main ()
{
	char s[] = "pablblo";
	int c = 'b';
	printf("%s", strchr(s, c));
}