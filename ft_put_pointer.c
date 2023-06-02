/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:50:58 by anouri            #+#    #+#             */
/*   Updated: 2022/12/07 15:48:17 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_pnbr(unsigned long long n)
{
	int	len;

	len = 1;
	while (n / 16)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_ptr_to_base(unsigned long long nbr)
{
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = ft_len_pnbr(nbr);
	if (nbr < 16)
		write(1, &base[nbr], 1);
	if (nbr >= 16)
	{
		ft_ptr_to_base(nbr / 16);
		ft_ptr_to_base(nbr % 16);
	}
	return (i);
}

int	ft_put_pointer(void *p)
{
	unsigned long long	ptr;
	int					i;

	ptr = (unsigned long long)p;
	i = 0;
	if (p == 0)
	{
		write (1, "(nil)", 5);
		i = 5;
	}
	else
	{
		write(1, "0x", 2);
		i = 2;
		i += ft_ptr_to_base(ptr);
	}
	return (i);
}
