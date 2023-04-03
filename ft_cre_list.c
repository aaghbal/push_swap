/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cre_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:45:10 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/07 20:45:11 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_var	*ft_new_node(long long n)
{
	t_var	*new;

	new = (t_var *)malloc(sizeof(t_var));
	if (new == NULL)
		return (0);
	new->data = n;
	new->link = NULL;
	new->pos = 0;
	return (new);
}

t_var	*new_list(long long *ptr, int lengh)
{
	int		i;
	int		j;
	t_var	*head;
	t_var	*curr;
	t_var	*new_node;

	i = 0;
	j = 0;
	head = NULL;
	curr = NULL;
	while (i < lengh)
	{
		new_node = ft_new_node(ptr[j]);
		if (head == NULL)
			head = new_node;
		else
			curr->link = new_node;
		curr = new_node;
		i++;
		j++;
	}
	return (head);
}

void	ft_index(t_var *lst)
{
	t_var	*list;
	t_var	*tmp;

	list = lst;
	tmp = lst;
	while (lst)
	{
		list = tmp;
		while (list)
		{
			if (lst->data > list->data)
				lst->pos++;
			list = list->link;
		}
		lst = lst->link;
	}
}
