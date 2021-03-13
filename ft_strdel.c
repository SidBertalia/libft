/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:35:35 by telias-p          #+#    #+#             */
/*   Updated: 2021/03/13 18:40:50 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strdel libera memoria da string armazenada e deleta o conteudo da string
** apontada
*/

void	ft_strdel(char **str)
{
	if (*str && str)
	{
		free(*str);
		*str = NULL;
	}
}
