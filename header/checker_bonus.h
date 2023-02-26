/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:37:02 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:53:37 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
# include <stdio.h>  // Printf
# include <stdlib.h> // Malloc / Free / uint8_t
# include <unistd.h> // Read

# define STD_IN 0
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
# define SA 16
# define SB 17
# define SS 18
# define PA 19
# define PB 20

// Parsing Stdin
void	read_instr(void);
uint8_t	parse_stdin(void);
uint8_t	valid_instr(char *s);
uint8_t	ft_str(char *s1, char *s2);

// Parsing Int list
uint8_t	is_int(const long i);
long	ft_atoi(const char *s);
uint8_t	is_digit(const char c);
uint8_t	intcheck(const char *s);
uint8_t	is_numeric(const char *s);
uint8_t	split_and_add(const char *s);
uint8_t	alreadylisted(const int num);
uint8_t	get_str_int_count(const char *s);
uint8_t	parse_args(int argv, char **argc);
uint8_t	ft_strstr(const char *str, const char *to_find);

// Stacks
int		*stack_a(const uint8_t flag, const int value);
int		*stack_b(const uint8_t flag, const int value);
int		*stack_c(const uint8_t flag, const int value);

// Sorting
void	sa(void);
void	sb(void);
void	ss(void);
void	pa(void);
void	pb(void);
void	ra(void);
void	rb(void);
void	rr(void);
void	rra(void);
void	rrb(void);
void	rrr(void);

// Sorting Tools
void	swap(int *a, int *b);
void	ft_writeerr(char *s);
int		*rotate(int *arr, const int size);
int		*revrotate(int *arr, const int size);
void	*ft_memset(void *b, int c, size_t len);
int		*remove_first(int *arr, const int size);
int		*add_last(int *arr, const int new_value, const int size);
int		*add_first(int *arr, const int new_value, const int size);

// Stack Tools
uint8_t	free_all(void);
void	sfree(int *arr);
uint8_t	is_sorted(void);

// Error msg
uint8_t	errormsg(uint8_t flag);

#endif
