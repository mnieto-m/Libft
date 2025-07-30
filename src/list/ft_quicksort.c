/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:40:25 by mnieto-m          #+#    #+#             */
/*   Updated: 2025/07/30 16:26:52 by mnieto-m         ###   ########.fr       */
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

void	ft_quicksort(t_list *low, t_list *high, int (*cmp)(void *, void *))
{
	t_list	*pivot;
	t_list	*prev;

	if ((low != NULL) && (high != NULL) && (low != high) && (low != high->next))
	{
		pivot = ft_partition(low, high, cmp);
		prev = NULL;
		if (pivot != low)
		{
			prev = low;
			while (prev && prev->next != pivot)
				prev = prev->next;
		}
		if (prev != NULL)
			ft_quicksort(low, prev, cmp);
		ft_quicksort(pivot->next, high, cmp);
	}
}
