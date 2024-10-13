
#include <unistd.h>

int	ft_print_char(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}
/*
int	ft_print_hex(int number)
{
}
*/
int	ft_print_number(int number)
{
	char	num;
	int	len;

	len = 0;
	if (number == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (number < 0)
	{
		write (1, "-", 1);
		number *= -1;
		len++;
	}
	if (number > 9)
		ft_print_number(number / 10);
	num = (number % 10) + '0';
	write (1, &num, 1);
	len++;
	return (len);
}
