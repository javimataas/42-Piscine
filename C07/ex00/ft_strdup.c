/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:46:43 by jmatas-p          #+#    #+#             */
/*   Updated: 2022/07/20 13:27:42 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	i = 0;
	while (src[i])
		i++;
	res = malloc(sizeof(src) * i);
	i = 0;
	if (res == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			res[i] = src[i];
			i++;
		}
		res[i] = '\0';
		return (res);
	}
}
