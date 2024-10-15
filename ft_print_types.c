/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:13:37 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/15 17:19:22 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 

int	ft_print_char(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
		return(ft_print_str("(null)"));
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

void	ft_print_uppercase(char c)
{
	if (ft_isalpha(c))
		c = c - 32;
	write (1, &c, 1);
}

int	ft_print_hex(unsigned int number, int flag)
{
	char	towrite;
	int	len;

	len = 0;
	if (number / 16 > 0)
		len += ft_print_hex(number / 16, flag);
	len++;
	if (number % 16 > 9)
		towrite = ((number % 16) - 10) + 'a';
	else
		towrite = number % 16 + '0';
	if (flag == 0)
		write (1, &towrite, 1);
	else if (flag == 1)
		ft_print_uppercase(towrite);
	return (len);
}

int	ft_print_void(unsigned long address)
{
	char	towrite;
	int	len;

	len = 0;
	/*if (address == 0)
	{
		write(1, "(nil)", 6);
		return (0);
	}*/
	if (address / 16 > 0)
		len += ft_print_void(address / 16);
	len++;
	if (address % 16 > 9)
		towrite = ((address % 16) - 10) + 'a';
	else
		towrite = address % 16 + '0';
	write (1, &towrite, 1);
	return (len);
}

int	ft_print_unsgn_num(unsigned int number)
{	
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
		len += ft_print_num(number / 10);
	num = (number % 10) + '0';
	write (1, &num, 1);
	len++;
	return (len);
}
