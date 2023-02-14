/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:17:01 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/11 10:44:07 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int *ran, int n)
{
	int	i;
	int	dis;

	dis = 1;
	i = 0;
	while (++i < n)
		if (ran[i - 1] >= ran[i])
			dis = 0;
	if (!dis)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(ran[i] + 48);
	if (ran[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	ran[10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		ran[i] = i;
	while (ran[0] <= (10 - n) && n >= 1)
	{
		ft_print_num(ran, n);
		if (n == 10)
			break ;
		ran[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (ran[i] > 9)
			{
				ran[i - 1]++;
				ran[i] = 0;
			}
		}
	}
}
