/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:41:24 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/11 20:41:29 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa_sb(t_var *lst, int c)
{
	int		a;
	int		b;
	t_var	*node;

	if (ft_listsize(lst) < 2)
		return ;
	node = lst;
	a = node->data;
	node = node->link;
	b = node->data;
	lst->data = b;
	lst = lst->link;
	lst->data = a;
	if (c == 0)
		write(1, "sa\n", 3);
	else if (c == 1)
		write(1, "sb\n", 3);
}

void	ft_ra_rb(t_var **lst, int c)
{
	t_var	*tmp;
	t_var	*head;

	if (!(*lst))
		return ;
	tmp = *lst;
	(head) = (*lst)->link;
	while ((*lst)->link)
		*lst = (*lst)->link;
	(*lst)->link = tmp;
	tmp->link = NULL;
	*lst = head;
	if (c == 0)
		write(1, "ra\n", 3);
	else if (c == 1)
		write(1, "rb\n", 3);
}

void	ft_rra_rrb(t_var **lst, int c)
{
	t_var	*head;
	t_var	*tmp;

	if (ft_listsize(*lst) < 2)
		return ;
	head = (*lst);
	while ((*lst)->link)
	{
		tmp = (*lst);
		(*lst) = (*lst)->link;
	}
	tmp->link = NULL;
	(*lst)->link = head;
	if (c == 0)
		write(1, "rra\n", 4);
	else if (c == 1)
		write(1, "rrb\n", 4);
}

void	ft_pa_pb(t_var **src, t_var **dst, int c)
{
	t_var	*tmp;
	t_var	*new;

	if (ft_listsize(*src) == 0)
		return ;
	tmp = (*src);
	(*src) = (*src)->link;
	if ((*dst) == NULL)
		(*dst) = ft_llstnew(tmp->data, tmp->pos);
	else
	{
		new = ft_llstnew(tmp->data, tmp->pos);
		ft_llstadd_front(dst, new);
	}
	free(tmp);
	if (c == 0)
		write(1, "pb\n", 3);
	else if (c == 1)
		write(1, "pa\n", 3);
}
