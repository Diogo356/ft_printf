/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:06:32 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/11/10 15:48:00 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int    ft_validation(const char *format, va_list ap);

int ft_printf(const char *format, ...)
{
	int count;
	int i;
	va_list ap;

	count = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if(format[i] == '%')
		{
			count += ft_validation(&format[i + 1], ap);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return(count);
}
int    ft_validation(const char *format, va_list ap)
{
	int count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if(*format =='%')
		count += ft_putchar('%');
	else if(*format == 'i' || *format == 'd')
		count += ft_putnbr(va_arg(ap, int));
	else if (*format == 'u')
		count += ft_putUnsig(va_arg(ap, unsigned int));
	//else if(*format == 'x')
		//count += ?????? 
	//else if (*format == 'X')
		//count += ????
	//else if(*format == 'p')
		//count+= ??? 
	return(count);
}

// int main(void)
// {
// 	char *c = "abcdef";
// 	int i;
// 	int j = 34555;
// 	char h = 'a';
// 	unsigned int u = 24;

// 	//meu printf;
// 	i = ft_printf("\nteste meu = %s\n", c);
// 	printf("saida do meu = %i\n", i);

// 	//printf original;
// 	i = printf("\nteste ori = %s\n", c);
// 	printf("saida da maquina = %i\n", i);

// 	//meu printf
// 	i = ft_printf("\nteste meu = %c\n", h);
// 	printf("saida do meu = %i\n", i);

// 	//printf original;
// 	i = printf("\nteste ori = %c\n", h);
// 	printf("saida da maquina = %i\n", i);

// 	//meu printf;
// 	i = ft_printf("\nteste meu = %%\n");
// 	printf("saida do meu = %i\n", i);

// 	//printf original;
// 	i = printf("\nteste ori = %%\n");
// 	printf("saida da maquina = %i\n", i);

// 	//meu printf;
// 	i = ft_printf("\nteste meu = %i\n", j);
// 	printf("saida do meu = %i\n", i);

// 	//printf original;
// 	i = printf("\nteste ori = %i\n", j);
// 	printf("saida da maquina = %i\n", i);

// 		//meu printf;
// 	i = ft_printf("\nteste meu = %d\n", j);
// 	printf("saida do meu = %i\n", i);

// 	//printf original;
// 	i = printf("\nteste ori = %d\n", j);
// 	printf("saida da maquina = %i\n", i);

// 		//meu printf;
// 	i = ft_printf("\nteste meu = %u\n", u);
// 	printf("saida do meu = %i\n", i);

// 	//printf original;
// 	i = printf("\nteste ori = %u\n", u);
// 	printf("saida da maquina = %i\n", i);



// 	return (0);
// }
