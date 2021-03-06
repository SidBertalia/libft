/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:06:03 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/17 22:29:42 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Exclui e libera o elemento dado e todos os sucessores desse elemento,
** usando a função "del" e free(3).No final, o ponteiro para a lista deve ser
** definido como NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = 0;
}
