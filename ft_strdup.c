/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:46:41 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/20 17:04:08 by sbertali         ###   ########.fr       */
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
	size_t	original_size;
	char	*new_string;

	original_size = ft_strlen(s) + 1;
	new_string = malloc((original_size) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	ft_memcpy(new_string, s, original_size);
	return (new_string);
}
