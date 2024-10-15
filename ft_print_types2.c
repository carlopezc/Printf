/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_types2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:13:37 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/15 17:52:20 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 

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
