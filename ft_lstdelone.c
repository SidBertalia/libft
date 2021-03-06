/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:06:08 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/17 22:28:38 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Toma como parâmetro um elemento e libera a memória do conteúdo do elemento
** usando a função "del" fornecida como um parâmetro e libera o elemento.
** A memória do "next" não deve ser liberada.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
