/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsecond_last.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:53:24 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/12/18 13:55:49 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstsecond_last(t_list *a)
{
	t_list	*previous;

	previous = NULL;
	while (a->next != NULL)
	{
		previous = a;
		a = a->next;
	}
	return (previous);
}
