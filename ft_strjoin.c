/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:53:04 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/17 20:22:08 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatena duas strings dentro de uma nova string (com malloc).
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		size1;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	i = ft_strlen(s2);
	new = (char *)malloc((sizeof(char) * (size1 + i + 1)));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < size1)
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[size1 + i] = s2[i];
		i++;
	}
	new[size1 + i] = '\0';
	return (new);
}
