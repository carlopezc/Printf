/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:14:31 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/17 13:53:59 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_check_types(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_num(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unsgn_num(va_arg(args, int)));
	else if (c == 'x')
		return (ft_print_hex(va_arg(args, int), 0));
	else if (c == 'X')
		return (ft_print_hex(va_arg(args, int), 1));
	else if (c == 'p')
	{
		if (va_arg(args, long) == 0)
			return (ft_print_str("(nil)"));
		write(1, "0x", 2);
		return (2 + ft_print_void(va_arg(args, long)));
	}
	else if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(char const *c, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, c);
	i = 0;
	len = 0;
	while (c[i])
	{
		if (c[i] == '%' && c[i + 1])
			len = len + ft_check_types(c[++i], args);
		else
		{
			write(1, &c[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
