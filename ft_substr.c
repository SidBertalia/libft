/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:01:41 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/20 16:41:33 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Extrai uma substring de uma string.
**
** A função substr aloca (com malloc(3)) e retorna uma substring da string "s".
** A substring começa no índice "start" e é de tamanho máximo "len".
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if ((int)len <= 0 || (int)start < 0 ||
	(int)start > (int)ft_strlen((char *)s) - 1)
	{
		return (ft_strdup(""));
	}
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
	{
		return (0);
	}
	i = 0;
	while (i < len && *(s + start) != '\0')
	{
		*(substr + i) = *(s + start);
		i++;
		start++;
	}
	*(substr + i) = '\0';
	return (substr);
}
