/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnieto-m <mnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:23:15 by mnieto-m          #+#    #+#             */
/*   Updated: 2025/06/03 00:14:26 by mnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cmp_int(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}
