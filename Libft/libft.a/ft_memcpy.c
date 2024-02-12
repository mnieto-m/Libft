/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:39:25 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/02/01 19:39:28 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;

	if(dst == '\0' && src == '\0')
	{
			return(0);
	}

	while(i < n)
	{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return(dst);

}

/*int main()
{
char src[] = "kasjflaksdjfkljasf";
char dst[89] ;
size_t n = 90;
printf("%s", ft_memcpy(dst, src, n));
}*/