/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_libft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:45:14 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/03/26 16:24:59 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!n)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)s)[i] = '\0';
			i++;
		}		
	}
}

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;

	if (nelem == 0 || elsize == 0 || nelem > 2147483647 || elsize > 2147483647)
		return (NULL);
	p = malloc (nelem * elsize);
	if (p == 0)
		return (p);
	ft_bzero (p, nelem * elsize);
	return (p);
}

int	ft_len_nbr(unsigned long long int nb)
{
	int	size;

	size = 1;
	while (nb >= 16)
	{
		size++;
		nb /= 16;
	}
	return (size);
}
