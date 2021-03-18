/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbertali <sbertali@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:03:15 by sbertali          #+#    #+#             */
/*   Updated: 2021/03/18 12:58:36 by sbertali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A função toupper() converte letra minúscula na maiúscula correspondente.
*/

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = (c - ('a' - 'A'));
	return (c);
}
