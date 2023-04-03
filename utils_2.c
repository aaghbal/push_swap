/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:38:58 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/23 15:39:00 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_pb(t_var **st_a, t_var **st_b, int *tab1, int *tab2)
{
	int	i;

	i = 0;
	while (i < tab1[2])
	{
		if ((*st_a)->pos >= tab1[0] && (*st_a)->pos <= tab1[1])
		{
			ft_pa_pb(st_a, st_b, 0);
			i++;
		}
		else if ((*st_a)->pos >= tab2[0] && (*st_a)->pos <= tab2[1])
		{
			ft_pa_pb(st_a, st_b, 0);
			if (ft_listsize(*st_b) != 1)
				ft_ra_rb(st_b, 1);
			i++;
		}
		else
			ft_ra_rb(st_a, 0);
	}
}

int	ft_pos(t_var *lst, int j)
{
	int	c;

	c = 0;
	while ((lst)->pos != j)
	{
		lst = lst->link;
		c++;
	}
	return (c);
}

void	ft_pa(t_var **st_a, t_var **st_b, int size)
{
	int	i;
	int	c;
	int	j;

	i = 0;
	c = 0;
	j = size;
	c = ft_pos(*st_b, j - 1);
	while (i < size - 1)
	{
		if ((*st_b)->pos == (j - 1))
		{
			ft_pa_pb(st_b, st_a, 1);
			i++;
			j--;
			c = ft_pos(*st_b, j - 1);
		}
		else if (c >= (j / 2))
			ft_rra_rrb(st_b, 1);
		else if (c < (j / 2))
			ft_ra_rb(st_b, 1);
	}
	ft_pa_pb(st_b, st_a, 1);
	ft_llstclear(st_b);
}
