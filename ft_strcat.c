/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:40:58 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/05 15:40:59 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strcat(char *dst, char **src)
{
	size_t	i;
	size_t	c;
	size_t	l;

	c = 0;
	i = 0;
	while (src[i])
	{
		l = 0;
		while (src[i][l])
		{
			dst[c] = src[i][l];
			c++;
			l++;
		}
		dst[c++] = ' ';
		i++;
	}
	dst[c] = '\0';
	return (c);
}
