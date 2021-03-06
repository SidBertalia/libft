/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:03:00 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/14 16:58:27 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A função strnstr() localiza a primeira ocorrência de terminador null
** da string "s2" na string "s1", onde não mais do que "n" caracteres são
** pesquisados. Os caracteres que aparecem após um caractere `\0' não são
** pesquisados.
** "Agulha no text"
*/

#include "libft.h"

char	*ft_strnstr(const char *text, const char *wrd, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	if (wrd[0] == '\0')
		return ((char *)text);
	while (text[h] != '\0')
	{
		n = 0;
		while (text[h + n] == wrd[n] && (h + n) < len)
		{
			if (text[h + n] == '\0' && wrd[n] == '\0')
				return ((char *)&text[h]);
			n++;
		}
		if (wrd[n] == '\0')
			return ((char *)text + h);
		h++;
	}
	return (0);
}
