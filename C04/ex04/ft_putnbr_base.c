/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:53:38 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/25 20:15:15 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_er(char *base, int *er)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*er = 1;
	while (base[i] && *er == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*er = 1;
		}
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == '%' || base[i] == '/'
			|| base[i] == '*' || base[i] == '='
			|| base[i] == '.' || base[i] == ','
			|| base[i] < 33 || base[i] > 126)
			*er = 1;
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lenb;
	int		er;
	long	n;

	lenb = 0;
	er = 0;
	ft_er(base, &er);
	n = nbr;
	if (er == 0)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		while (base[lenb])
			lenb++;
		if (n < lenb)
			ft_putchar(base[n]);
		if (n >= lenb)
		{
			ft_putnbr_base(n / lenb, base);
			ft_putnbr_base(n % lenb, base);
		}
	}
}
