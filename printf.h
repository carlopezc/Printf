/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:14:06 by carlopez          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/17 13:19:05 by carlopez         ###   ########.fr       */
=======
/*   Updated: 2024/10/15 17:14:13 by carlopez         ###   ########.fr       */
>>>>>>> 2deb3ddaf405b7a8b4a75840e7ab1273527da3ae
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

<<<<<<< HEAD
# include <stdarg.h>
# include <unistd.h>

=======
#include <stdarg.h>
#include <unistd.h>

int	ft_isalpha(int c);
>>>>>>> 2deb3ddaf405b7a8b4a75840e7ab1273527da3ae
int	ft_printf(char const *c, ...);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_num(int number);
int	ft_print_hex(unsigned int number, int flag);
int	ft_print_unsgn_num(unsigned int number);
int	ft_print_void(unsigned long address);

#endif
