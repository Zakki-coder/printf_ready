/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_part_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniemine <jniemine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:10:40 by jniemine          #+#    #+#             */
/*   Updated: 2022/05/19 16:10:57 by jniemine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*not_itoa(char *out, unsigned long long nb, int len, int prefix)
{
	unsigned long long	ll;

	ll = 0;
	while (len > 0)
	{
		ll = nb - ((nb / 10) * 10);
		nb /= 10;
		*(out + prefix + --len) = ll + '0';
	}	
	return (out);
}
