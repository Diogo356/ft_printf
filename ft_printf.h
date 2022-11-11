/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:07:25 by dbelarmi          #+#    #+#             */
/*   Updated: 2022/11/11 15:29:25 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# define HAX_UPER "0123456789ABCDEF"
# define HAX_LOWER "0123456789abcdef"

int		ft_printf(const char *format, ...);
int		ft_validation(char format, va_list ap);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putunsig(unsigned int nb);
int		ft_puthax_lower(unsigned long nb, int flag);
int		ft_puthax_uper(unsigned long nb, int flag);
int		ft_len_nbr(unsigned long long int nb);
int		ft_put_pt(unsigned long n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nelem, size_t elsize);

#endif
