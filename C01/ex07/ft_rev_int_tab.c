/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:35:24 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/11 17:03:29 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}


int		main(void)
{
	int tab[3];

	tab[0] = 1;
	tab[1] = 2;	
	tab[2] = 3;

	int size = 3;

	ft_rev_int_tab(tab, size);

	write(1, &tab[0], 1);
	write(1, &tab[1], 1);
	write(1, &tab[2], 1);
}
