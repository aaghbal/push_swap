/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:36:51 by aaghbal           #+#    #+#             */
/*   Updated: 2023/03/02 17:36:53 by aaghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_var
{
	int				data;
	int				pos;
	struct s_var	*link;
}					t_var;

typedef struct s_data
{
	int				i;
	int				c_ag;
	int				c;
	long long		*attoi;
	char			*concat;
	char			**spl;
}					t_data;

size_t				ft_strcat(char *dst, char **src);
void				check_char(char *tab);
int					count_num(char const *s, char c);
void				free_arr(char **ptr);
int					ft_len_arg(char **argv);
t_var				*new_list(long long *ptr, int lengh);
void				check_double(long long *tab, int len);
void				check_max_int_num(long long *tab, int len);
int					ft_listsize(t_var *lst);
void				ft_sa_sb(t_var *lst, int c);
void				ft_ra_rb(t_var **lst, int c);
void				ft_rra_rrb(t_var **lst, int c);
void				ft_pa_pb(t_var **src, t_var **dst, int c);
void				check_sort(t_var *list);
void				check_arg(char **argv);
void				ft_llstadd_front(t_var **lst, t_var *new);
t_var				*ft_llstnew(int content, int pos);
void				ft_index(t_var *lst);
char				*ft_cases(t_var *lst);
int					ft_strcmp(char *s1, char *s2);
void				ft_cases_3(char *tab, t_var **stack_a);
void				ft_shanks(t_var **st_a, t_var **st_b, int size);
void				ft_llstclear(t_var **lst);
void				ft_llstdelone(t_var *lst);
void				ft_pb(t_var **st_a, t_var **st_b, int *tab1, int *tab2);
void				ft_pa(t_var **st_a, t_var **st_b, int size);
void				ft_shanks_9(t_var **st_a, t_var **st_b, int size);
void				ft_range_9(int *tab1, int *tab2, int size, int cas);
void				ft_range_9_2(int *tab1, int *tab2, int size, int cas);
void				ft_range_9_3(int *tab1, int *tab2, int size, int cas);
char				*ft_cases(t_var *lst);
void				ft_cases_4(t_var **stack_a, t_var **stack_b);
void				ft_cases_5(t_var **stack_a, t_var **stack_b);
void				ft_case_4(char *tab, t_var **stack_a);
void				ft_initialization(t_data *data, char **argv);
void				all_free(t_data *data, t_var *stack_a, t_var *stack_b);

void				leakss(void);

#endif
