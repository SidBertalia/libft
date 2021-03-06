/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:02:20 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/20 16:41:32 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A função strchr() localiza a primeira ocorrência de "c"
** (convertida em um char) na string apontada por "s".
** O caractere final null é considerado parte da string;
** portanto, se "c" for `\0', as funções localizam o terminador `\0'.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	else
		return (NULL);
}
