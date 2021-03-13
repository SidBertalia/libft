/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:28:16 by telias-p          #+#    #+#             */
/*   Updated: 2021/03/13 17:14:54 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *text, const char *wrd)
{
	int i;
	int j;

	i = 0;
	if (wrd[0] == '\0')
		return ((char *)text);
	while (text[i] != '\0')
	{
		j = 0;
		while (text[i + j] == wrd[j] && text[i + j] != '\0')
		{
			if (wrd[j + 1] == '\0')
				return ((char *)&text[i]);
			j++;
		}
		i++;
	}
	return (0);
}
