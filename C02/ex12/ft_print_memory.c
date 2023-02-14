/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:19:10 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/13 13:17:00 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_mk_hex(int n, int er)
{
	char	*basehex;

	basehex = "0123456789abcdef";
	if (n <= 0 && er == 0)
	{
		n += 256;
	}
	if (n >= 16)
	{
		ft_mk_hex(n / 16, 12);
		ft_mk_hex(n % 16, 1);
	}
	else
	{
		if (er == 0)
			ft_putchar('0');
		ft_putchar(basehex[n]);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
}
