/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_part_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniemine <jniemine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:53:10 by jniemine          #+#    #+#             */
/*   Updated: 2022/05/19 15:40:42 by jniemine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	no_conversion(t_fs *f_str, char **percent)
{
	if (f_str->width >= 1)
		f_str->width -= 1;
	if (f_str->flags & ZERO)
		print_zeroes(f_str->width);
	else
		print_spaces(f_str->width);
	f_str->str = *percent + 1;
	while (*f_str->str == ' ')
		++f_str->str;
	*percent = (char *)f_str->str - 1;
	return (1);
}

void	function_dispatcher(t_fs *f_str, char conversion)
{
	if (conversion == 'u' || conversion == 'U'
		|| conversion == 'd' || conversion == 'i')
		integer(f_str);
	else if (conversion == 'o')
		octal(f_str);
	else if (conversion == 'X' || conversion == 'x')
		hexa(f_str, 0);
	else if (conversion == '%')
		put_percent(f_str);
	else if (conversion == 's')
		put_string(f_str);
	else if (conversion == 'c')
		put_character(f_str);
	else if (conversion == 'p')
		put_pointer_address(f_str);
	else
		float_to_ascii(f_str);
	format_fs(f_str);
}

void	get_format(t_fs *f_str, char *conversion, char *percent)
{
	char	*format;

	f_str->ret += write(1, f_str->str, percent - f_str->str);
	format = (char *)ft_memalloc(sizeof(*format) * (conversion - percent) + 1);
	if (format == NULL)
		exit(-1);
	ft_memcpy(format, percent, conversion - percent);
	format[conversion - percent + 1] = '\0';
	get_flags(f_str, format);
	get_width(f_str, format);
	get_precision(f_str, format);
	get_modifiers(f_str, format);
	f_str->str = conversion;
	function_dispatcher(f_str, *conversion);
	free (format);
}
