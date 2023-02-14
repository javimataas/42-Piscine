/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:58:44 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/14 09:02:54 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n1;
	unsigned int	n2;

	n1 = 0;
	n2 = 0;
	while (dest[n1] != '\0')
		n1++;
	while (src[n2] != '\0' && n2 < nb)
	{
		dest[n1] = src[n2];
		n1++;
		n2++;
	}
	dest[n1] = '\0';
	return (dest);
}
