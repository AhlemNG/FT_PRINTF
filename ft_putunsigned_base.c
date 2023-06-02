/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:14:32 by anouri            #+#    #+#             */
/*   Updated: 2022/12/10 11:31:28 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_tell_base(char format)
{
	if (format == 'x')
		return ("0123456789abcdef");
	if (format == 'X')
		return ("0123456789ABCDEF");
	return ("0123456789");
}

static unsigned int	ft_len_nbr(unsigned int n, int baselen)
{
	unsigned int	len;

	len = 1;
	while (n / baselen)
	{
		n = n / baselen;
		len++;
	}
	return (len);
}

int	ft_putunsigned_base(unsigned int nbr, char format)
{
	unsigned int	len;
	int				i;
	char			*base;

	len = 10;
	base = ft_tell_base(format);
	if (format == 'x' || format == 'X')
		len = 16;
	i = ft_len_nbr(nbr, len);
	if (nbr < len)
		write(1, &base[nbr], 1);
	if (nbr >= len)
	{
		ft_putunsigned_base(nbr / len, format);
		ft_putunsigned_base(nbr % len, format);
	}
	return (i);
}
