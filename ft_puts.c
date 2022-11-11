/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:06:54 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/11/11 15:39:31 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			count += ft_putchar(str[i]);
			i++;
		}
	}
	else
		count += write(1, "(null)", 6);
	return (count);
}

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb <= -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	count += ft_putchar(nb + 48);
	return (count);
}

int	ft_putunsig(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= 4294967295;
		count += nb;
	}
	if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	count += ft_putchar(nb + 48);
	return (count);
}
