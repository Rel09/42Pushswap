/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 04:11:52 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/31 04:49:12 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	sort_two(void)
{
	int	*a;

	if (*stack_a(GET_SIZE, 0) == 1)
		return ;
	a = stack_a(GET_ARR, 0);
	if (a[0] > a[1])
		sa();
}

void	sort_three(void)
{
	int	*a;
	int	size;

	a = stack_a(GET_ARR, 0);
	size = *stack_a(GET_SIZE, 0);
	if (a[0] < a[1] && a[0] > a[size - 1])
		rra();
	else if (a[0] > a[1] && a[0] < a[size - 1])
		sa();
	else if (a[size - 1] < a[0] && a[size - 1] > a[1])
		ra();
	else if (a[1] < a[0] && a[1] > a[size - 1])
	{
		ra();
		sa();
	}
	else if (a[size - 1] > a[0] && a[size - 1] < a[1])
	{
		rra();
		sa();
	}
}

void	sort_all(void)
{
	t_move	t;

	pb();
	pb();
	while (*stack_a(GET_SIZE, 0) != 3)
	{
		t = get_best_move();
		execute_algo(t.instr.a_instr, t.instr.a_count);
		execute_algo(t.instr.b_instr, t.instr.b_count);
		pb();
	}
}

void	push_back(void)
{
	int	closest;

	while (*stack_b(GET_SIZE, 0) != 0)
	{
		closest = closest_i_a(stack_b(GET_ARR, 0)[0]);
		if (closest == 0)
		{
			pa();
			if (stack_a(GET_ARR, 0)[0] > stack_a(GET_ARR, 0)[1])
				ra();
		}
		else
		{
			execute_command_pt2(*stack_a(GET_SIZE, 0), closest);
			pa();
		}
	}
}

void	final_sort(void)
{
	int	i;
	int	size;
	int	smallest;

	i = 0;
	smallest = smallest_i('A');
	size = *stack_a(GET_SIZE, 0);
	if (size - smallest < smallest)
	{
		while (i < size - smallest)
		{
			rra();
			i++;
		}
	}
	else
	{
		while (i < smallest)
		{
			ra();
			i++;
		}
	}
}
