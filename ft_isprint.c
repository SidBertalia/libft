/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:01:44 by sbertali          #+#    #+#             */
/*   Updated: 2021/02/14 16:53:27 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A função isprint() testa qualquer caractere de impressão, incluindo
** espaço (` ').
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
