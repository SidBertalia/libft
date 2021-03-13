/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:26:59 by telias-p          #+#    #+#             */
/*   Updated: 2021/03/13 18:40:50 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
