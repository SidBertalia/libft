/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:02:29 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/14 16:58:27 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funções strlcpy() e strlcat() copiam e concatenam strings respectivamente.
** São projetadas para serem mais seguras, consistentes e com menos erros.
** Ao contrário das funções, strncpy() e strncat(), tomam o tamanho total do
** buffer (não apenas o comprimento) e garantem terminar em NUL (contanto que o
** tamanho seja maior que 0 ou, no caso de strlcat(),
** desde que haja pelo menos um byte livre em "dst".
** Isso significa que para strlcpy() "src" deve terminar em NUL
** e para strlcat() ambos "src" e "dst" devem ser terminados em NUL.
** A função strlcat() anexa a string "src" ao final de "dst".
** Ele acrescentará 1 bytes a strlen "dst", terminando em NUL.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t c;
	size_t d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
