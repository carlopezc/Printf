
#include "printf.h"

static int	ft_check_types(char c, va_list args)
{
	unsigned int	num;

	num = 0;
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_number(va_arg(args, int)));
	else if (c == 'u')
	{
		num = (unsigned int)va_arg(args, int);
		/*if (num < 0)
			num *= -1;*/
		return (ft_print_number(num));
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
	va_list args;
	int	i;
	int	len;

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
