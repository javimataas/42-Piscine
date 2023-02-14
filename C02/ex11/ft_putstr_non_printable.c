/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:11:08 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/13 18:40:21 by jmatas-p         ###   ########.fr       */
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

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			j = str[i];
			ft_mk_hex(j, 0);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
