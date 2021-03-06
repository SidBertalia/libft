/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:31:59 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/17 15:01:58 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Cria uma string a partir da modificação da string com a função especificada.
** Aplica a função "f" a cada caractere da string "s" para criar uma nova
** string (com malloc(3)) resultante da aplicação sucessivas de "f".
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f || !(str = ft_strdup(s)))
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
