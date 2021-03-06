/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:06:12 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/17 22:21:02 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Itera a lista "lst" e aplica a função "f" ao conteúdo de cada elemento.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
