/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:34:11 by telias-p          #+#    #+#             */
/*   Updated: 2021/03/13 18:40:50 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strcclen devolve posição de caractere procurado na string, usando len
*/

size_t	ft_strclen(const char *str, const char c)
{
	unsigned int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
