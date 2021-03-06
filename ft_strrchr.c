/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:03:06 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/20 16:41:30 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A função strrchr() localiza a última ocorrência de "c"
** (convertida em um char) na string "s".
** Se "c" for `\0', strrchr() localiza a terminação `\0'.
** A função strrchr() é idêntica a strchr(), exceto que localiza a última
** ocorrência de "c".
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*(s + len) == (char)c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
