/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:02:38 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/14 16:58:27 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funções strlcpy() e strlcat() copiam e concatenam strings respectivamente.
** São projetadas para serem mais seguras, consistentes e com menos erros.
** Ao contrário das funções, strncpy() e strncat(), tomam o tamanho total do
** buffer (não só o comprimento) e garantem terminar em NUL (contanto que o
** tamanho seja maior que 0 ou, no caso de strlcat(),
** desde que haja pelo menos um byte livre em "dst".
** – Observe que deve ser incluido um byte para o NUL em tamanho.
** – Observe também que strlcpy() e strlcat() operam apenas em strings `` C ''
** verdadeiras.
** Isso significa que para strlcpy() "src" deve terminar em NUL e
** para strlcat() ambos "src" e "dst" devem ser terminados em NUL.
** A função strlcpy() copia até o tamanho de 1 caractere do terminador NUL da
** string "src" para "dst", finalizando o resultado em NUL.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;
	size_t i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
