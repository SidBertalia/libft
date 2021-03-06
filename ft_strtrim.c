/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 18:33:54 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/10 18:41:07 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** "Ajusta" o início e o fim da string com os caracteres especificados.
**
** Aloca (com malloc(3)) e retorna uma cópia de "s1" com o caracteres
** especificados em "set" removidos do início e do final da string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
