/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:53:16 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/10 19:55:08 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Produz a string "s" para o descritor de arquivo fornecido.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
