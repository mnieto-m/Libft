/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstisduplicate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:09:59 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/11/06 20:54:24 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_lstisduplicate(t_list **a)
{
	int		lstsize;
	int		i;
	t_list	*aux;
	void	*last_value;

	i = 0;
	aux = *a;
	lstsize = ft_lstsize(*a);
	last_value = (ft_lstlast(*a)->content);
	while (i < lstsize - 1)
	{
		if (*(int *)last_value == *(int *)aux->content)
			return (0);
		aux = aux->next;
		i++;
	}
	return (1);
}
