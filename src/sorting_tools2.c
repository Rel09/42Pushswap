/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tools2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 03:17:27 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/31 03:17:02 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	*revrotate(int *arr, const int size)
{
	int	i;
	int	j;
	int	*temp;

	temp = malloc(size * sizeof(int));
	if (!temp)
		return (0);
	i = 0;
	j = 0;
	temp[i++] = arr[size - 1];
	while (i < size)
		temp[i++] = arr[j++];
	free(arr);
	return (temp);
}

t_cost	init_distance_value(int a, int b)
{
	t_cost	t;

	t.a_up = a;
	t.a_down = *stack_a(GET_SIZE, 0) - a;
	t.b_up = b;
	t.b_down = *stack_b(GET_SIZE, 0) - b;
	return (t);
}

int	get_mode(int a, int b, uint8_t flag)
{
	if (a > b)
	{
		if (flag == 0)
			return (RA);
		else
			return (RRA);
	}
	else
	{
		if (flag == 0)
			return (RB);
		else
			return (RRB);
	}
}

t_move	get_moves(int leftover, int merged, uint8_t mode, int flag)
{
	t_move	t;

	if (flag == 0)
	{
		t.cost = leftover + merged;
		t.instr = save_command(merged, RR, leftover, mode);
	}
	else if (flag == 1)
	{
		t.cost = leftover + merged;
		t.instr = save_command(merged, RRR, leftover, mode);
	}
	else if (flag == 2)
	{
		t.cost = leftover + merged;
		t.instr = save_command(leftover, RA, merged, RRB);
	}
	else
	{
		t.cost = leftover + merged;
		t.instr = save_command(leftover, RRA, merged, RB);
	}
	return (t);
}

void	execute_command_pt2(int size, int closest)
{
	int	i;

	i = 0;
	if (size - closest < closest)
	{
		while (i < size - closest)
		{
			rra();
			i++;
		}
	}
	else
	{
		while (i < closest)
		{
			ra();
			i++;
		}
	}
}
