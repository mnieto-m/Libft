/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:37:19 by mnieto-m          #+#    #+#             */
/*   Updated: 2025/05/28 19:55:59 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcopy(t_list *lst)
{
	t_list	*new_list;

	if (!lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		ft_lstadd_back(&new_list, ft_lstnew(lst->content));
		lst = lst->next;
	}
	return (new_list);
}
