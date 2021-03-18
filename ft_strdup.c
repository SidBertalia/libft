/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:46:41 by sbertali          #+#    #+#             */
/*   Updated: 2021/03/18 12:55:33 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A função strdup() aloca memória suficiente para uma cópia da string s1,
** faz a cópia e retorna um ponteiro para ela. O ponteiro pode ser
** subsequentemente usado como um argumento para a função free (3).
*/

#include "libft.h"
char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	if (!(ptr = malloc(len + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
