/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:40:25 by mnieto-m          #+#    #+#             */
/*   Updated: 2025/06/03 00:14:03 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_partition(t_list *low, t_list *high, int (*cmp)(void *, void *))
{
	void	*pivot;
	t_list	*i;
	t_list	*j;

	pivot = high->content;
	i = low;
	j = low;
	while (j != high)
	{
		if (cmp(j->content, pivot) < 0)
		{
			ft_swap(i, j);
			i = i->next;
		}
		j = j->next;
	}
	ft_swap(i, high);
	return (i);
}

void	ft_quicksort(t_list *lst, t_list *high, int (*cmp)(void *, void *))
{
	t_list	*pivot;

	if ((lst != NULL) && (high != NULL) && (lst != high) && (lst != high->next))
	{
		pivot = ft_partition(lst, high, cmp);
		ft_quicksort(lst, pivot->next, cmp);
		ft_quicksort(pivot->next, high, cmp);
	}
}
