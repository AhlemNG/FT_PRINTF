/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:30:56 by anouri            #+#    #+#             */
/*   Updated: 2022/12/10 12:06:22 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_set(va_list args, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char const *)));
	else if (format == 'p')
		return (ft_put_pointer(va_arg(args, void *)));
	else if (format == 'd')
		return (ft_putnbr_base(va_arg(args, int), 'd'));
	else if (format == 'i')
		return (ft_putnbr_base(va_arg(args, int), 'i'));
	else if (format == 'u')
		return (ft_putunsigned_base(va_arg(args, unsigned int), 'u'));
	else if (format == 'x')
		return (ft_putunsigned_base(va_arg(args, unsigned int), 'x'));
	else if (format == 'X')
		return (ft_putunsigned_base(va_arg(args, unsigned int), 'X'));
	else if (format == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
