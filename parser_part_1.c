/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_part_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniemine <jniemine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:55:59 by jniemine          #+#    #+#             */
/*   Updated: 2022/05/19 15:57:29 by jniemine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*search_conversion(char *fs)
{
	char	*conversions;
	int		i;
	int		k;

	conversions = "diouUxXfcsp%";
	i = 0;
	k = 0;
	if (!fs)
		return (NULL);
	while (fs[i] != '\0')
	{
		while (conversions[k] != '\0')
		{
			if (conversions[k] == fs[i])
				return (&fs[i]);
			++k;
		}
		k = 0;
		++i;
	}
	return (NULL);
}

int	is_correct_format(char c, int flag)
{
	if (flag == 1)
	{
		return (c == '#' || c == '-' || c == '0' || c == '+'
		|| c == ' ' || c == 'U' || c == 'L' || c == 'l' || c == 'h'
		|| ft_isdigit(c) || c == '%' || c == '.'
		|| c == 'f' || c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'o' || c == 'u' || c == 'x' || c == 'X');
	}
	else
	{
		return (c == '#' || c == '-' || c == '0' || c == '+'
		|| c == ' ' || c == 'U' || c == 'L' || c == 'l' || c == 'h'
		|| ft_isdigit(c) || c == '.');
	}
}

static int check_dbl_prcnt_split(t_fs *f_str, char *percent, char **l_fs)
{
	while (percent && *l_fs < percent)
	{
		if (!is_correct_format(**l_fs, 1))
		{
			f_str->str = *l_fs;
			return (1);
		}
		++(*l_fs);
	}
	return (0);
}

static char	*check_for_double_percent(t_fs *f_str, char *fs)
{
	char		*percent;
	const char	*conversion;
	char	*l_fs;

	l_fs = fs + 1;
	while(is_correct_format(*l_fs, 2))
		++l_fs;
	percent = ft_strchr(l_fs, '%');
	if (percent)
		conversion = search_conversion(l_fs);
	else
		conversion = percent;
	if (!percent || conversion < percent)
		return (fs);
	if (!is_correct_format(*l_fs, 1) && *l_fs != '%')
	{
		f_str->ret += write(1, l_fs, percent - l_fs);
		fs = percent;
		f_str->str = fs;
		return(fs);
	}
	if (check_dbl_prcnt_split(f_str, percent, &l_fs))
		return(percent);
	return (fs);
}

void	parser_has_percent(t_fs *f_str, char **percent, char **conversion)
{
	*percent = check_for_double_percent(f_str, *percent);
	if (*percent)
		*conversion = search_conversion(*percent + 1);
}

void	parser(t_fs *f_str)
{
	char	*conversion;
	char	*percent;

	conversion = NULL;
	while (*f_str->str != '\0')
	{
		if (conversion)
			f_str->str = conversion + 1;
		percent = ft_strchr(f_str->str, '%');
		if (percent)
			parser_has_percent(f_str, &percent, &conversion);
		if (!percent)
		{
			f_str->ret += write(1, f_str->str, ft_strlen(f_str->str));
			return ;
		}
		else if (!conversion && no_conversion(f_str, &percent))
		{
			while(is_correct_format(*percent, 1))
				++percent;
			f_str->ret += write(1, percent, ft_strlen(percent));
			return ;
		}
		else
			get_format(f_str, (char *)conversion, (char *)percent);
	}
}
