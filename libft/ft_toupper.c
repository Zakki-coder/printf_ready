/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniemine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:11:48 by jniemine          #+#    #+#             */
/*   Updated: 2021/11/10 21:17:57 by jniemine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int	diff;

	diff = 'a' - 'A';
	if (c >= 'a' && c <= 'z')
		return (c - diff);
	return (c);
}
