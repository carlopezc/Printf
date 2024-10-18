
#include "printf.h"
#include "stdio.h"

int	main(void)
{

	ft_printf("\n\n PRUEBAS PARA HACER CON MI PRINTF \n\n");

	ft_printf("PROBAMOS %%c: \n");
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %c\n", 'c'));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %c\n", 'c'));
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %c\n", 'A'));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %c\n", 'A'));
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %c\n", ' '));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %c\n", ' '));
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %c\n", 43));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %c\n", 43));

	ft_printf("\n");

	ft_printf("PROBAMOS %%s: \n");
	ft_printf("\n");
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %s\n", "hola hola"));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %s\n", "hola hola"));
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %s\n", "123456789"));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %s\n", "123456789"));
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %s\n", NULL));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %s\n", NULL));
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %s\n", ""));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %s\n", ""));

	ft_printf("\n");

	ft_printf("PROBAMOS %%d: \n");
	ft_printf("\n");
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %d\n", 0));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %d\n", 0));
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %d\n", 123456789));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %d\n", 123456789));
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %d\n", -2147483648));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %d\n", -2147483648));
	ft_printf("El tamano de mi funcion: %d\n", ft_printf("Valor devuelto por mi funcion: %d\n", 2147483647555));
	printf("El tamano de la original: %d\n", printf("Valor devuelto por la original %d\n", 2147483647555));

	ft_printf("PROBAMOS %%i: \n");
	ft_printf("\n");
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %i\n", -0));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %i\n", -0));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %i\n", -11));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %i\n", -11));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %i\n", 2147483647));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %i\n", 2147483647));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %i\n", 234562147483647555));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %i\n", 234562147483647555));
	ft_printf("\n");

	ft_printf("PROBAMOS %%u: \n");
	ft_printf("\n");
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %u\n", -0));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %u\n", -0));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %u\n", -11));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %u\n", -11));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %u\n", -2147483648));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %u\n", -2147483648));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %u\n", 234562147483647555));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %u\n", 234562147483647555));
	printf("\n");

	ft_printf("PROBAMOS %%p: \n");
	ft_printf("\n");
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %p\n", NULL));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %p\n", NULL));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %p\n", "hola"));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %p\n", "hola"));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %p\n", ""));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %p\n", ""));

	ft_printf("\n");

	ft_printf("PROBAMOS %%x y %%X: \n");
	ft_printf("\n");
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %x\n", 47));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %x\n", 47));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %X\n", 1978));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %X\n", 1978));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %x\n", -6719));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %x\n", -6719));
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %X\n", 10));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %X\n", 10));
	printf("\n");

	ft_printf("PROBAMOS %% \n");
	ft_printf("\n");
	ft_printf("El tamano de mi funcion: %i\n", ft_printf("Valor devuelto por mi funcion: %%\n"));
	printf("El tamano de la original: %i\n", printf("Valor devuelto por la original %%\n"));
	

	






	return (0);
}
