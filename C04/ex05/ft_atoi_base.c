/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:23:43 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/18 12:24:01 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_base_er(char *base)
{
	int	i;
	int	j;

	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == ' ' || base[i] == '\f'
			|| base[i] == '\n' || base[i] == '\t'
			|| base[i] == '\r' || base[i] == '\v'
			|| base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	ft_atoi_src(char *str, int *i)
{
	int	mul;

	mul = 1;
	while (str[*i] == ' ' || str[*i] == '\f'
		|| str[*i] == '\n' || str[*i] == '\t'
		|| str[*i] == '\r' || str[*i] == '\v')
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			mul *= -1;
		*i += 1;
	}
	return (mul);
}

int	ft_atoi_tmp(char c, char *base)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	mul;
	int	n;
	int	tmp;
	int	len;

	n = 0;
	i = 0;
	len = ft_base_er(base);
	if (len >= 2)
	{
		mul = ft_atoi_src(str, &i);
		tmp = ft_atoi_tmp(str[i], base);
		while (tmp != -1)
		{
			n = (n * len) + tmp;
			i++;
			tmp = ft_atoi_tmp(str[i], base);
		}
		return (n *= mul);
	}
	return (0);
}
