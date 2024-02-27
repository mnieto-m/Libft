/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:42:55 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/27 16:43:44 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	char	*str;
	char	auxs1;
	char	auxs2;

	auxs1 = *s1;
	auxs2 = *s2;
	if (!s1 || !s2)
			return (0);
	n = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)(malloc(n + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, &auxs1, n + 1);
	ft_strlcat(str, &auxs2, n + 1);
	return (str);
}
