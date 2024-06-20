/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:33:18 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/06/18 22:04:32 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_pf(char *s, int *count)
{
	int i;
	i = 0;

	while(s[i] != '\0')
	{
		write(1, &s[i], 1);
		(*count)++;
		i++;
	}
}
/* int main() {
    // Test case 1: Empty string
    char str1[] = "";
    ft_putstr_pf(str1, 0); // Expected output: (nothing)

    // Test case 2: String with no special characters
    char str2[] = "Hello, world!";
    ft_putstr_pf(str2, 0); // Expected output: Hello, world!

    // Test case 3: String with special characters
    char str3[] = "Hello\tworld\n";
    ft_putstr_pf(str3, 0); // Expected output: Hello   world

    return 0;
}
 */