/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:01:51 by mnieto-m          #+#    #+#             */
/*   Updated: 2025/06/03 00:14:39 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsort(t_list *lst, int (*cmp)(void *, void *))
{
	t_list	*high;

	if (!lst || !cmp)
		return ;
	high = ft_lstlast(lst);
	ft_quicksort(lst, high, cmp);
}
