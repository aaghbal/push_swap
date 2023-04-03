/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shanks_9.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:31:53 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/29 20:31:55 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_range_9(int *tab1, int *tab2, int size, int cas)
{
	if (cas == 0)
	{
		tab1[0] = 0;
		tab1[1] = ((size / 9) / 2) - 1;
		tab1[2] = (size / 9);
		tab2[0] = ((size / 9) / 2);
		tab2[1] = (size / 9) - 1;
	}
	if (cas == 1)
	{
		tab1[0] = (size / 9);
		tab1[1] = (3 * ((size / 9) / 2)) - 1;
		tab1[2] = (size / 9);
		tab2[0] = (3 * ((size / 9) / 2));
		tab2[1] = (2 * (size / 9)) - 1;
	}
	if (cas == 2)
	{
		tab1[0] = 2 * (size / 9);
		tab1[1] = (5 * ((size / 9) / 2)) - 1;
		tab1[2] = (size / 9);
		tab2[0] = 5 * ((size / 9) / 2);
		tab2[1] = (3 * (size / 9)) - 1;
	}
}

void	ft_range_9_2(int *tab1, int *tab2, int size, int cas)
{
	if (cas == 3)
	{
		tab1[0] = 3 * (size / 9);
		tab1[1] = (7 * ((size / 9) / 2)) - 1;
		tab1[2] = (size / 9);
		tab2[0] = 7 * ((size / 9) / 2);
		tab2[1] = (4 * (size / 9)) - 1;
	}
	if (cas == 4)
	{
		tab1[0] = (4 * (size / 9));
		tab1[1] = ((9 * ((size / 9) / 2)) - 1);
		tab1[2] = (size / 9);
		tab2[0] = (9 * ((size / 9) / 2));
		tab2[1] = ((5 * (size / 9)) - 1);
	}
	if (cas == 5)
	{
		tab1[0] = (5 * (size / 9));
		tab1[1] = ((11 * ((size / 9) / 2)) - 1);
		tab1[2] = (size / 9);
		tab2[0] = (11 * ((size / 9) / 2));
		tab2[1] = ((6 * (size / 9)) - 1);
	}
}

void	ft_range_9_3(int *tab1, int *tab2, int size, int cas)
{
	if (cas == 6)
	{
		tab1[0] = 6 * (size / 9);
		tab1[1] = (13 * ((size / 9) / 2)) - 1;
		tab1[2] = (size / 9);
		tab2[0] = 13 * ((size / 9) / 2);
		tab2[1] = (7 * (size / 9)) - 1;
	}
	if (cas == 7)
	{
		tab1[0] = (7 * (size / 9));
		tab1[1] = ((15 * ((size / 9) / 2)) - 1);
		tab1[2] = (size / 9);
		tab2[0] = (15 * ((size / 9) / 2));
		tab2[1] = ((8 * (size / 9)) - 1);
	}
	if (cas == 8)
	{
		tab1[0] = (8 * (size / 9));
		tab1[1] = ((17 * ((size / 9) / 2)) - 1);
		tab1[2] = (size / 9);
		tab2[0] = (17 * ((size / 9) / 2));
		tab2[1] = ((9 * (size / 9)) - 1);
	}
}

void	ft_shanks_9(t_var **st_a, t_var **st_b, int size)
{
	int	i;
	int	c;
	int	tab1[3];
	int	tab2[2];

	c = 0;
	i = size - ((size / 9) * 9);
	while (c < 9)
	{
		if (c < 3)
			ft_range_9(tab1, tab2, size, c);
		else if (c < 6)
			ft_range_9_2(tab1, tab2, size, c);
		else
			ft_range_9_3(tab1, tab2, size, c);
		ft_pb(st_a, st_b, tab1, tab2);
		c++;
	}
	while (i)
	{
		ft_pa_pb(st_a, st_b, 0);
		ft_ra_rb(st_b, 1);
		i--;
	}
	ft_llstclear(st_a);
}
