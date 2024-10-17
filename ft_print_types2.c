/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_types2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:13:37 by carlopez          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/17 13:19:50 by carlopez         ###   ########.fr       */
=======
/*   Updated: 2024/10/15 17:52:20 by carlopez         ###   ########.fr       */
>>>>>>> 2deb3ddaf405b7a8b4a75840e7ab1273527da3ae
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 

<<<<<<< HEAD
int	ft_print_char(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
		return (ft_print_str("(null)"));
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	ft_print_unsgn_num(unsigned int number)
{
=======
int	ft_print_unsgn_num(unsigned int number)
{	
>>>>>>> 2deb3ddaf405b7a8b4a75840e7ab1273527da3ae
	int	len;
	int	num;

	len = 0;
	if (number > 9)
		len += ft_print_unsgn_num(number / 10);
	num = (number % 10) + '0';
	write (1, &num, 1);
	len++;
	return (len);
}

int	ft_print_num(int number)
{
	char	num;
<<<<<<< HEAD
	int		len;
=======
	int	len;
>>>>>>> 2deb3ddaf405b7a8b4a75840e7ab1273527da3ae

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
		len += ft_print_num(number / 10);
	num = (number % 10) + '0';
	write (1, &num, 1);
	len++;
	return (len);
}
