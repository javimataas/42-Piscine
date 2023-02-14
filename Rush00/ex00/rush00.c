/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:08:06 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/10 19:48:02 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_putchar.c"

void	rush(int c, int f)
{
	int	col;
	int	fil;

	col = c;
	fil = f;
	while (f > 0)
	{
		c = col;
		while (c > 0)
		{
			if ((f == fil || f == 1))
			{
				if (c == col || c == 1)
				{
					ft_putchar('o');
				}
				else
				{
					ft_putchar('-');
				}
			}
			else
			{
				if (c == col || c == 1)
				{
					ft_putchar('|');
				}
				else
				{
					ft_putchar(' ');
				}
			}
			c--;
		}
		write(1, "\n", 2);
		f--;
	}
}
