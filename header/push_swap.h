/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:53:17 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/07 13:08:57 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>	// Write
# include <stdio.h>  	// Printf
# include <stdlib.h> 	// Malloc / Free / uint8_t

# define ADD_LAST 1
# define GET_ARR 2
# define GET_SIZE 3
# define FREE 4
# define ADD_FIRST 5
# define REM_FIRST 6
# define ROTATE 7
# define REVROTATE 8

# define RA 10
# define RB 11
# define RR 12
# define RRA 13
# define RRB 14
# define RRR 15

typedef struct _data
{
	int		*arr;
	int		size;
}			t_data;

typedef struct _instruction
{
	int		a_count;
	uint8_t	a_instr;
	int		b_count;
	uint8_t	b_instr;
}			t_instr;

typedef struct _move
{
	int		cost;
	t_instr	instr;
}			t_move;

typedef struct _cost
{
	int		a_up;
	int		a_down;
	int		b_up;
	int		b_down;
}			t_cost;

// Parse Args
uint8_t		parse_args(int argv, char **argc);

// Stacks
int			*stack_a(const uint8_t flag, const int value);
int			*stack_b(const uint8_t flag, const int value);

// Stack tools
uint8_t		free_all(void);
uint8_t		is_sorted(void);
void		sfree(int *arr);
t_data		get_data(char stack);

// Sorting functions
void		sa(void);// swap A
void		sb(void);// swap B
void		ss(void);// swap Both
void		pa(void);// push A
void		pb(void);// push B
void		ra(void);// reverse A
void		rb(void);// reverse B
void		rr(void);// reverse Both
void		rra(void);// Rev reverse A
void		rrb(void);// Rev reverse B
void		rrr(void);// Rev reverse Both

// Sorting tools
void		swap(int *a, int *b);
int			*rotate(int *arr, const int size);
int			*revrotate(int *arr, const int size);
int			*remove_first(int *arr, const int size);
int			*add_last(int *arr, const int new_value, const int size);
int			*add_first(int *arr, const int new_value, const int size);

// Algos
void		sort_all(void);
void		sort_two(void);
void		sort_three(void);
void		push_back(void);
void		final_sort(void);

// Algos tools
t_move		get_best_move(void);
int			closest_i_a(int num);
int			closest_i_b(int num);
int			biggest_i(char stack);
int			smallest_i(char stack);
t_move		bestmove(int a, int b);
t_cost		init_distance_value(int a, int b);
void		execute_algo(uint8_t ins, int count);
int			get_mode(int a, int b, uint8_t flag);
void		execute_command_pt2(int size, int closest);
t_instr		save_command(int a, uint8_t b, int c, uint8_t d);
t_move		get_moves(int leftover, int merged, uint8_t mode, int flag);

// Tools
int			absolute(int i);
int			max(int a, int b);
void		ft_writeerr(char *s);
uint8_t		is_int(const long i);
uint8_t		is_digit(const char c);
long		ft_atoi(const char *s);
uint8_t		intcheck(const char *s);
uint8_t		is_numeric(const char *s);
uint8_t		alreadylisted(const int i);
uint8_t		split_and_add(const char *s);
uint8_t		get_str_int_count(const char *s);
uint8_t		ft_strstr(const char *str, const char *to_find);

// Error msg
uint8_t		error_msg(const uint8_t flag, const uint8_t type);

#endif
