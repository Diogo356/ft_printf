/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:49:22 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/11/11 15:36:42 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthax_lower(unsigned long nb, int flag)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_puthax_lower((nb / 16), flag);
		count += ft_puthax_lower((nb % 16), flag);
	}
	else if (flag == 'x')
		return (ft_putchar(HAX_LOWER[nb]));
	return (count);
}

int	ft_puthax_uper(unsigned long nb, int flag)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_puthax_uper((nb / 16), flag);
		count += ft_puthax_uper((nb % 16), flag);
	}
	else if (flag == 'X')
		return (ft_putchar(HAX_UPER[nb]));
	return (count);
}

int	ft_put_pt(unsigned long nb)
{
	char				*str;
	unsigned long int	lenght;
	unsigned long int	mod;
	char				*ch_order;
	int					count;

	mod = nb;
	if (nb == 0)
		return (ft_putstr("(nil)"));
	count = ft_len_nbr(nb);
	ch_order = ft_calloc (sizeof (char), (count + 1));
	if (!ch_order)
		return (ft_putnbr(0));
	str = HAX_LOWER;
	lenght = ft_putstr("0x");
	while (count != 0)
	{
		mod = nb % 16;
		ch_order[--count] = str[mod];
		nb = nb / 16;
	}
	lenght += ft_putstr(ch_order);
	free (ch_order);
	return (lenght);
}
