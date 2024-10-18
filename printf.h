/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:14:06 by carlopez          #+#    #+#             */
/*   Updated: 2024/10/17 19:37:32 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *c, ...);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_num(int number);
int	ft_print_hex(unsigned int number, int flag);
int	ft_print_unsgn_num(unsigned int number);
int	ft_print_void(unsigned long address);

#endif
