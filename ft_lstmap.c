/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:06:21 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/17 22:24:39 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Itera a lista "lst" e aplica a função "f" ao conteúdo de cada elemento.
** Cria uma nova lista resultante das aplicações sucessivas da função "f".
** A função "del" é usada para excluir o conteúdo de um elemento, se necessário.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *elem;

	if (!lst)
	{
		return (0);
	}
	new_lst = 0;
	while (lst)
	{
		if (!(elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
