/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:49:22 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/11/10 20:47:33 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthax(unsigned long nb, int flag)
{
	int	counter;

	counter = 0;
	if (nb >= 16)
	{
		counter += ft_puthax((nb / 16), flag);
		counter += ft_puthax((nb % 16), flag);
	}
	else
	{
		if (flag == 'x')
			return (ft_putchar(HAX_LOWER[nb]));
		else
			return (ft_putchar(HAX_UPER[nb]));
	}
	return (counter);
}