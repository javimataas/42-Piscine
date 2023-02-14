/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:08:28 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/25 11:05:21 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_pwr(int b, int e)
{
	while (e > 1)
	{
		b *= b;
		e--;
	}
	return (b);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nb;
	int	nflag;
	int	size;
	int	ps;
	int	n;

	nb = 0;
	ps = 0;
	nbr = ft_atoi(nbr, base_from, &nflag, &size);
	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	while (ps < size)
	{
		n = 0;
		while (base_from[n] != nbr[ps])
			n++;
		nb += n * ft_pwr(ft_strlen(base_from), (size - ps - 1));
		ps++;
	}
	return (ft_putnbr_base(nb, base_to, nflag);
}
