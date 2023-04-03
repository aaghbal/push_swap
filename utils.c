/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:03:41 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/07 20:03:42 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_num(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			j++;
		i++;
	}
	return (++j);
}

void	free_arr(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

int	ft_len_arg(char **argv)
{
	int	i;
	int	l;
	int	c;

	i = 0;
	l = 0;
	c = 0;
	while (argv[i])
	{
		l = 0;
		while (argv[i][l])
		{
			l++;
			c++;
		}
		c++;
		i++;
	}
	return (c);
}

void	check_max_int_num(long long *tab, int len)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (tab[j] > 2147483647 || tab[j] < -2147483648)
			exit(write(2, "Error\n", 6));
		j++;
	}
}

int	ft_listsize(t_var *lst)
{
	int	len;

	len = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		lst = lst->link;
		len++;
	}
	return (len);
}
