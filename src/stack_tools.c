/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 02:15:05 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/31 04:50:55 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	sfree(int *arr)
{
	if (arr)
		free(arr);
}

uint8_t	free_all(void)
{
	stack_a(FREE, 0);
	stack_b(FREE, 0);
	return (1);
}

uint8_t	is_sorted(void)
{
	int	i;
	int	last;
	int	*arr;
	int	size;

	if (*stack_b(GET_SIZE, 0) > 0)
		return (0);
	i = 1;
	arr = stack_a(GET_ARR, 0);
	last = arr[0];
	size = *stack_a(GET_SIZE, 0);
	while (i < size)
	{
		if (last > arr[i])
			return (0);
		last = arr[i++];
	}
	return (1);
}

t_data	get_data(char stack)
{
	t_data	t;

	if (stack == 'A')
	{
		t.arr = stack_a(GET_ARR, 0);
		t.size = *stack_a(GET_SIZE, 0);
	}
	else
	{
		t.arr = stack_b(GET_ARR, 0);
		t.size = *stack_b(GET_SIZE, 0);
	}
	return (t);
}
