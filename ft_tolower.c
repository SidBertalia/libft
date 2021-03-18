/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:03:11 by sbertali          #+#    #+#             */
/*   Updated: 2021/03/18 12:58:15 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A função toupper() converte letra maiúscula na minúscula correspondente.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}
