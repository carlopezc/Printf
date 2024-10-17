
#include <stdio.h>
#include "printf.h"

int	main(void)
{
	void	*p;
	int	i;

	i = 1;
	p = &i;

	ft_printf("CASO CON STR: \n");
	ft_printf("%d\n", ft_printf("%s\n", NULL));
	ft_printf("%d\n", ft_printf("%s\n", ""));
	printf("%d\n", printf("%s\n", NULL));
	printf("%d\n", printf("%s\n", ""));


	ft_printf("CASO CON DECIMAL: \n");
	ft_printf("%d\n", ft_printf("%d\n", 255));
	ft_printf("%d\n", ft_printf("%d\n", -255));
	printf("%d\n", printf("%d\n", 255));
	printf("%d\n", printf("%d\n", -255));

	ft_printf("CASO CON HEXADECIMAL: \n");
	ft_printf("%d\n", ft_printf("%x\n", 26));
	ft_printf("%d\n", ft_printf("%X\n", 26));
	printf("%d\n", printf("%x\n", 26));
	printf("%d\n", printf("%X\n", 26));
	
	ft_printf("CASO CON UNSIGNED INT: \n");
	ft_printf("%d\n", ft_printf("%u\n", -10));
	ft_printf("%d\n", ft_printf("%u\n", 0));
	printf("%d\n", printf("%u\n", -10));
	printf("%d\n", printf("%u\n", 0));

	ft_printf("CASO VOID *: \n");
	printf("%d\n", printf("%p\n", NULL));
	ft_printf("%d\n", ft_printf("%p\n", NULL));

	return (0);
}
