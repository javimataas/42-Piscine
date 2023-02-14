/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:06:44 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/19 12:26:48 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_r(int i, int nb)
{
	if (i == 0)
		return (nb);
	if (i >= 1)
		return (ft_recursive_factorial_r(i - 1, nb * i));
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	return (ft_recursive_factorial_r(nb, 1));
}
