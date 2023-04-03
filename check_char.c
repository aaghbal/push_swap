/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:27:10 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/05 23:27:11 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_char(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((tab[i] >= '0' && tab[i] <= '9') || (tab[i] == ' ')
			|| (tab[i] == '-' && ft_isdigit(tab[i + 1])) || (tab[i] == '+'
				&& ft_isdigit(tab[i + 1])))
			i++;
		else
			exit(write(2, "Error\n", 6));
	}
}

void	check_double(long long *tab, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] == tab[j])
				exit(write(2, "Error\n", 6));
			j++;
		}
		i++;
	}
}

void	check_sort(t_var *list)
{
	int	i;

	i = 0;
	while (list->link)
	{
		if (list->data > list->link->data)
			return ;
		list = list->link;
	}
	exit(0);
}

void	check_arg(char **argv)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	c = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				c = 1;
			j++;
		}
		if (c == 0)
			exit(write(2, "Error\n", 6));
		c = 0;
		i++;
	}
}
