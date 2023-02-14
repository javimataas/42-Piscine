/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:55:38 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/14 08:58:24 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (dest[n1] != '\0')
		n1++;
	while (src[n2] != '\0')
	{
		dest[n1] = src[n2];
		n1++;
		n2++;
	}
	dest[n1] = '\0';
	return (dest);
}
