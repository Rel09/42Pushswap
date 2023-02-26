/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:26:44 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/31 04:15:18 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	biggest_i(char stack)
{
	int		i;
	t_data	t;
	int		current_num;
	int		current_index;

	if (stack == 'A')
		t = get_data('A');
	else
		t = get_data('B');
	current_num = t.arr[0];
	current_index = 0;
	i = 0;
	while (i < t.size)
	{
		if (t.arr[i] > current_num)
		{
			current_index = i;
			current_num = t.arr[i];
		}
		i++;
	}
	return (current_index);
}

int	smallest_i(char stack)
{
	int		i;
	t_data	t;
	int		current_num;
	int		current_index;

	if (stack == 'A')
		t = get_data('A');
	else
		t = get_data('B');
	current_num = t.arr[0];
	current_index = 0;
	i = 0;
	while (i < t.size)
	{
		if (t.arr[i] < current_num)
		{
			current_index = i;
			current_num = t.arr[i];
		}
		i++;
	}
	return (current_index);
}

int	closest_i_b(int num)
{
	int	i;
	int	*arr;
	int	*arrb;
	int	closest_i;
	int	closest_val;

	arrb = stack_b(GET_ARR, 0);
	if (num > arrb[biggest_i('B')] || num < arrb[smallest_i('B')])
		return (biggest_i('B'));
	i = 0;
	closest_val = 2147483647;
	arr = stack_b(GET_ARR, 0);
	while (i < *stack_b(GET_SIZE, 0))
	{
		if (num > arr[i] && (num - arr[i]) < closest_val)
		{
			closest_i = i;
			closest_val = num - arr[i];
		}
		i++;
	}
	return (closest_i);
}

int	closest_i_a(int num)
{
	int	i;
	int	*arr;
	int	*arra;
	int	closest_i;
	int	closest_val;

	arra = stack_a(GET_ARR, 0);
	if (num > arra[biggest_i('A')] || num < arra[smallest_i('A')])
		return (smallest_i('A'));
	i = 0;
	closest_val = 2147483647;
	arr = stack_a(GET_ARR, 0);
	while (i < *stack_a(GET_SIZE, 0))
	{
		if (arr[i] > num && (arr[i] - num) < closest_val)
		{
			closest_i = i;
			closest_val = arr[i] - num;
		}
		i++;
	}
	return (closest_i);
}

t_move	get_best_move(void)
{
	int		i;
	int		*arr;
	t_move	best;
	t_move	current;

	i = 0;
	best.cost = 65535;
	arr = stack_a(GET_ARR, 0);
	while (i < *stack_a(GET_SIZE, 0))
	{
		current = bestmove(i, closest_i_b(arr[i]));
		if (current.cost < best.cost)
			best = current;
		i++;
	}
	return (best);
}
