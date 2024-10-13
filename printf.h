#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(char const *c, ...);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_number(int numer);

#endif
