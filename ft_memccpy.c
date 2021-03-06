/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:01:50 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/19 21:01:36 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copia a string até encontrar o caractere.
**
** A função memccpy() copia 0 ou mais caracteres de "src" para "dest",
** interrompendo quando o caractere "c" foi copiado ou quando os caracteres de
** contagem foram copiados, o que ocorrer primeiro.
**
**Se o caractere c for copiado, memccpy() retornará um ponteiro para o
** Char no "dest" que segue imediatamente o caractere.
** Se c não for copiado, ele retornará NULL.
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		if ((unsigned char)c == ((unsigned char *)src)[i])
			return (dest + i + 1);
		i++;
	}
	return (0);
}
