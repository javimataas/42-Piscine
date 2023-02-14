/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:55:21 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/19 10:05:48 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci_recur(int index, int n1, int n2)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (n2);
	if (index > 1)
		return (ft_fibonacci_recur(index - 1, n2, n1 + n2));
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_fibonacci_recur(index, 0, 1));
}
