/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:32:14 by anouri            #+#    #+#             */
/*   Updated: 2022/12/07 17:53:18 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *argument, ...)
{
	int		i;
	int		j;
	va_list	ap;

	i = 0;
	j = 0;
	va_start(ap, argument);
	while (argument[j])
	{
		if (argument[j] == '%')
		{
			j++;
			i += ft_format_set(ap, argument[j]);
		}
		else
			i += ft_putchar(argument[j]);
		j++;
	}
	return (i);
}
