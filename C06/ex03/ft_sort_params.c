/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:35:37 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/19 13:34:00 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int		n1;
	int		n2;
	char	*tmp;

	n2 = argc;
	n1 = 1;
	while (++n1 <= argc)
	{
		n2 = 1;
		while (++n2 <= argc - 1)
		{
			if (ft_strcmp(argv[n2], argv[n2 - 1]) < 0)
			{
				tmp = argv[n2];
				argv[n2] = argv[n2 - 1];
				argv[n2 - 1] = tmp;
			}
		}
	}
	n1 = 0;
	while (++n1 < argc)
		ft_putstr(argv[n1]);
}
