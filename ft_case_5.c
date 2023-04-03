/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:44:51 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/30 15:44:53 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_case_5(char *tab, t_var **stack_a)
{
	if (ft_strcmp(tab, "423"))
		ft_ra_rb(stack_a, 0);
	else if (ft_strcmp(tab, "324"))
		ft_sa_sb(*stack_a, 0);
	else if (ft_strcmp(tab, "432"))
	{
		ft_sa_sb(*stack_a, 0);
		ft_rra_rrb(stack_a, 0);
	}
	else if (ft_strcmp(tab, "243"))
	{
		ft_sa_sb(*stack_a, 0);
		ft_ra_rb(stack_a, 0);
	}
	else if (ft_strcmp(tab, "342"))
		ft_rra_rrb(stack_a, 0);
}

int	pos(t_var *stack_a, int c)
{
	int	pos;

	pos = 0;
	while (stack_a)
	{
		if (stack_a->pos == c)
			break ;
		pos++;
		stack_a = stack_a->link;
	}
	return (pos);
}

void	sort_5(t_var **stack_a, t_var **stack_b)
{
	char	*tab;

	tab = ft_cases(*stack_a);
	ft_case_5(tab, stack_a);
	ft_pa_pb(stack_b, stack_a, 1);
	ft_pa_pb(stack_b, stack_a, 1);
	free(tab);
}

void	ft_cases_5(t_var **stack_a, t_var **stack_b)
{
	int	c;
	int	k;

	c = 0;
	k = pos(*stack_a, 0);
	while (1)
	{
		if ((*stack_a)->pos == c)
		{
			ft_pa_pb(stack_a, stack_b, 0);
			k = pos(*stack_a, 1);
			c++;
		}
		else if (k < 3)
			ft_ra_rb(stack_a, 0);
		else if (k > 2)
			ft_rra_rrb(stack_a, 0);
		if (c == 2)
		{
			sort_5(stack_a, stack_b);
			break ;
		}
	}
}
