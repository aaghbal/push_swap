/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_5_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 23:11:26 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/30 23:11:28 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_cases(t_var *lst)
{
	int		i;
	char	*tab;

	i = 0;
	tab = (char *)malloc(sizeof(char) * 4);
	if (tab == NULL)
		return (0);
	while (lst != NULL)
	{
		tab[i] = *ft_itoa(lst->pos);
		i++;
		lst = lst->link;
	}
	tab[i] = '\0';
	return (tab);
}

void	ft_cases_3(char *tab, t_var **stack_a)
{
	if (ft_listsize(*stack_a) == 1)
		exit(0);
	if (ft_listsize(*stack_a) == 2)
		ft_sa_sb(*stack_a, 0);
	if (ft_listsize(*stack_a) == 3)
	{
		if (ft_strcmp(tab, "201"))
			ft_ra_rb(stack_a, 0);
		else if (ft_strcmp(tab, "102"))
			ft_sa_sb(*stack_a, 0);
		else if (ft_strcmp(tab, "210"))
		{
			ft_sa_sb(*stack_a, 0);
			ft_rra_rrb(stack_a, 0);
		}
		else if (ft_strcmp(tab, "021"))
		{
			ft_sa_sb(*stack_a, 0);
			ft_ra_rb(stack_a, 0);
		}
		else if (ft_strcmp(tab, "120"))
			ft_rra_rrb(stack_a, 0);
	}
}

void	ft_case_4(char *tab, t_var **stack_a)
{
	if (ft_strcmp(tab, "312"))
		ft_ra_rb(stack_a, 0);
	else if (ft_strcmp(tab, "213"))
		ft_sa_sb(*stack_a, 0);
	else if (ft_strcmp(tab, "321"))
	{
		ft_sa_sb(*stack_a, 0);
		ft_rra_rrb(stack_a, 0);
	}
	else if (ft_strcmp(tab, "132"))
	{
		ft_sa_sb(*stack_a, 0);
		ft_ra_rb(stack_a, 0);
	}
	else if (ft_strcmp(tab, "231"))
		ft_rra_rrb(stack_a, 0);
}

void	ft_cases_4(t_var **stack_a, t_var **stack_b)
{
	char	*tab;

	while (1)
	{
		if ((*stack_a)->pos == 0)
		{
			ft_pa_pb(stack_a, stack_b, 0);
			tab = ft_cases(*stack_a);
			ft_case_4(tab, stack_a);
			ft_pa_pb(stack_b, stack_a, 1);
			free(tab);
			break ;
		}
		ft_ra_rb(stack_a, 0);
	}
}
