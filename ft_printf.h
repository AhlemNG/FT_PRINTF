/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:13:20 by anouri            #+#    #+#             */
/*   Updated: 2022/12/10 13:26:13 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char const *s);
int	ft_put_pointer(void *p);
int	ft_printf(const char *str, ...);
int	ft_putnbr_base(int nbr, char format);
int	ft_putunsigned_base(unsigned int nbr, char format);
int	ft_format_set(va_list args, char format);

#endif
