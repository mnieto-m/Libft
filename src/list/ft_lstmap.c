/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:17:43 by mnieto-m          #+#    #+#             */
/*   Updated: 2024/07/23 16:28:22 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*final;
	t_list	*aux;
	void	*fcontent;

	final = NULL;
	while (lst)
	{
		fcontent = f(lst->content);
		aux = ft_lstnew(fcontent);
		if (!aux)
		{
			del(fcontent);
			ft_lstclear(&aux, del);
		}
		ft_lstadd_back(&final, aux);
		lst = lst->next;
	}
	return (final);
}
