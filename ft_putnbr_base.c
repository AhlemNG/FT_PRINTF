/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:13:41 by anouri            #+#    #+#             */
/*   Updated: 2022/12/07 17:51:28 by anouri           ###   ########.fr       */
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

static int	ft_len_nbr(int nbr, int baselen)
{
	int			len;
	long long	n;

	n = nbr;
	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}	
	while (n / baselen)
	{
		n = n / baselen;
		len++;
	}
	return (len);
}

int	ft_putnbr_base(int n, char format)
{
	int			len;
	int			i;
	char		*base;
	long long	nbr;

	nbr = n;
	len = 10;
	base = ft_tell_base(format);
	i = ft_len_nbr(nbr, len);
	if (format == 'x' || format == 'X')
		len = 16;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr < len)
		write(1, &base[nbr % len], 1);
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, format);
		ft_putnbr_base(nbr % len, format);
	}
	return (i);
}
