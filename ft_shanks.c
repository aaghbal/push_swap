/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shanks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:13:22 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/28 14:13:24 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_range(int *tab1, int *tab2, int size, int cas)
{
	if (cas == 0)
	{
		tab1[0] = 0;
		tab1[1] = ((size / 5) / 2) - 1;
		tab1[2] = (size / 5);
		tab2[0] = ((size / 5) / 2);
		tab2[1] = (size / 5) - 1;
	}
	if (cas == 1)
	{
		tab1[0] = (size / 5);
		tab1[1] = (3 * ((size / 5) / 2)) - 1;
		tab1[2] = (size / 5);
		tab2[0] = (3 * ((size / 5) / 2));
		tab2[1] = (2 * (size / 5)) - 1;
	}
	if (cas == 2)
	{
		tab1[0] = 2 * (size / 5);
		tab1[1] = (5 * ((size / 5) / 2)) - 1;
		tab1[2] = (size / 5);
		tab2[0] = 5 * ((size / 5) / 2);
		tab2[1] = (3 * (size / 5)) - 1;
	}
}

void	ft_range_2(int *tab1, int *tab2, int size, int cas)
{
	if (cas == 3)
	{
		tab1[0] = 3 * (size / 5);
		tab1[1] = (7 * ((size / 5) / 2)) - 1;
		tab1[2] = (size / 5);
		tab2[0] = 7 * ((size / 5) / 2);
		tab2[1] = (4 * (size / 5)) - 1;
	}
	if (cas == 4)
	{
		tab1[0] = (4 * (size / 5));
		tab1[1] = ((9 * ((size / 5) / 2)) - 1);
		tab1[2] = (size / 5);
		tab2[0] = (9 * ((size / 5) / 2));
		tab2[1] = ((5 * (size / 5)) - 1);
	}
}

void	ft_shanks(t_var **st_a, t_var **st_b, int size)
{
	int	i;
	int	tab1[3];
	int	tab2[2];

	i = size - ((size / 5) * 5);
	ft_range(tab1, tab2, size, 0);
	ft_pb(st_a, st_b, tab1, tab2);
	ft_range(tab1, tab2, size, 1);
	ft_pb(st_a, st_b, tab1, tab2);
	ft_range(tab1, tab2, size, 2);
	ft_pb(st_a, st_b, tab1, tab2);
	ft_range_2(tab1, tab2, size, 3);
	ft_pb(st_a, st_b, tab1, tab2);
	ft_range_2(tab1, tab2, size, 4);
	ft_pb(st_a, st_b, tab1, tab2);
	while (i)
	{
		ft_pa_pb(st_a, st_b, 0);
		ft_ra_rb(st_b, 1);
		i--;
	}
	ft_llstclear(st_a);
}
