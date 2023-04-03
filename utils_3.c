/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:22:50 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/21 15:22:52 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_llstadd_front(t_var **lst, t_var *new)
{
	if (new)
	{
		new->link = *lst;
		*lst = new;
	}
}

t_var	*ft_llstnew(int content, int pos)
{
	t_var	*node;

	node = (t_var *)malloc(sizeof(t_var));
	if (node == NULL)
		return (0);
	if (node == NULL)
		return (NULL);
	node->data = content;
	node->pos = pos;
	node->link = NULL;
	return (node);
}

void	all_free(t_data *data, t_var *stack_a, t_var *stack_b)
{
	free(data->concat);
	ft_llstclear(&stack_b);
	ft_llstclear(&stack_a);
	free(data->attoi);
	free_arr(data->spl);
	free(data);
}

void	ft_llstdelone(t_var *lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	ft_llstclear(t_var **lst)
{
	while (*lst)
	{
		free(*lst);
		*lst = (*lst)->link;
	}
	free(*lst);
}
