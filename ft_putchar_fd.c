/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:46:42 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/10 19:52:22 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Enviar um caractere para determinado arquivo.
**
** Produz o caractere "c" para o descritor de arquivo fornecido.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
