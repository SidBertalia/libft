/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:56:03 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/10 19:59:26 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Produz a string "s" para o descritor de arquivo fornecido, seguido por uma
** nova linha.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
