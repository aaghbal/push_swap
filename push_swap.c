/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:36:34 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/02 17:36:36 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initialization(t_data *data, char **argv)
{
	check_arg(argv);
	data->i = 1;
	data->c_ag = ft_len_arg(&argv[data->i]);
	data->concat = (char *)malloc(sizeof(char) * data->c_ag + 1);
	data->i = 1;
	ft_strcat(data->concat, &argv[data->i]);
	check_char(data->concat);
	data->spl = ft_split(data->concat, ' ');
	data->c = count_num(data->concat, ' ');
	data->attoi = (long long *)malloc(sizeof(long long) * data->c + 1);
	data->i = 0;
	while (data->spl[data->i])
	{
		data->attoi[data->i] = ft_atoi(data->spl[data->i]);
		data->i++;
	}
	check_max_int_num(data->attoi, data->i);
	check_double(data->attoi, data->i);
}

void	ft_algo(t_var *stack_a, t_var *stack_b, char *tab, t_data *data)
{
	if (ft_listsize(stack_a) <= 3)
		ft_cases_3(tab, &stack_a);
	else if (ft_listsize(stack_a) == 4)
		ft_cases_4(&stack_a, &stack_b);
	else if (ft_listsize(stack_a) == 5)
		ft_cases_5(&stack_a, &stack_b);
	else if (ft_listsize(stack_a) < 200)
	{
		ft_shanks(&stack_a, &stack_b, ft_listsize(stack_a));
		ft_pa(&stack_a, &stack_b, ft_listsize(stack_b));
	}
	else
	{
		ft_shanks_9(&stack_a, &stack_b, ft_listsize(stack_a));
		ft_pa(&stack_a, &stack_b, ft_listsize(stack_b));
	}
	all_free(data, stack_a, stack_b);
	free(tab);
}

int	main(int argc, char **argv)
{
	char	*tab;
	t_var	*stack_a;
	t_var	*stack_b;
	t_data	*data;

	if (argc > 1)
	{
		stack_b = NULL;
		data = (t_data *)malloc(sizeof(t_data));
		ft_initialization(data, argv);
		stack_a = new_list(data->attoi, data->i);
		ft_index(stack_a);
		check_sort(stack_a);
		tab = ft_cases(stack_a);
		ft_algo(stack_a, stack_b, tab, data);
	}
	else
		exit(0);
	return (0);
}
