/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:06:32 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/03/26 16:31:31 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		ft_validation(char format, va_list ap);

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	ap;

	count = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_validation(format[i + 1], ap);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

int	ft_validation(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format == '%')
		count += ft_putchar('%');
	else if (format == 'i' || format == 'd')
		count += ft_putnbr(va_arg(ap, int));
	else if (format == 'u')
		count += ft_putunsig(va_arg(ap, unsigned int));
	else if (format == 'x')
		count += ft_puthax_lower(va_arg(ap, unsigned int), format);
	else if (format == 'X')
		count += ft_puthax_uper(va_arg(ap, unsigned int), format);
	else if (format == 'p')
		count += ft_put_pt(va_arg(ap, unsigned long ));
	return (count);
}
