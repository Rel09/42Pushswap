/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 02:50:35 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:55:02 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

int	*stack_a(const uint8_t flag, const int value)
{
	static int	*arr;
	static int	size;

	if (flag == ADD_LAST)
		arr = add_last(arr, value, ++size);
	else if (flag == ADD_FIRST)
		arr = add_first(arr, value, ++size);
	else if (flag == REM_FIRST)
		arr = remove_first(arr, --size);
	else if (flag == ROTATE)
		arr = rotate(arr, size);
	else if (flag == REVROTATE)
		arr = revrotate(arr, size);
	else if (flag == GET_ARR)
		return (arr);
	else if (flag == GET_SIZE)
		return (&size);
	else if (flag == FREE)
		sfree(arr);
	return (0);
}

int	*stack_b(const uint8_t flag, const int value)
{
	static int	*arr;
	static int	size;

	if (flag == ADD_LAST)
		arr = add_last(arr, value, ++size);
	else if (flag == ADD_FIRST)
		arr = add_first(arr, value, ++size);
	else if (flag == REM_FIRST)
		arr = remove_first(arr, --size);
	else if (flag == ROTATE)
		arr = rotate(arr, size);
	else if (flag == REVROTATE)
		arr = revrotate(arr, size);
	else if (flag == GET_ARR)
		return (arr);
	else if (flag == GET_SIZE)
		return (&size);
	else if (flag == FREE)
		sfree(arr);
	return (0);
}

int	*stack_c(const uint8_t flag, const int value)
{
	static int	*arr;
	static int	size;

	if (flag == GET_ARR)
		return (arr);
	else if (flag == ADD_LAST)
		arr = add_last(arr, value, ++size);
	else if (flag == GET_SIZE)
		return (&size);
	else if (flag == FREE)
		sfree(arr);
	return (0);
}

void	read_instr(void)
{
	int	i;

	i = 0;
	while (i < *stack_c(GET_SIZE, 0))
	{
		if (stack_c(GET_ARR, 0)[i] == RA)
			ra();
		else if (stack_c(GET_ARR, 0)[i] == RB)
			rb();
		else if (stack_c(GET_ARR, 0)[i] == RR)
			rr();
		else if (stack_c(GET_ARR, 0)[i] == RRA)
			rra();
		else if (stack_c(GET_ARR, 0)[i] == RRB)
			rrb();
		else if (stack_c(GET_ARR, 0)[i] == RRR)
			rrr();
		else if (stack_c(GET_ARR, 0)[i] == SA)
			sa();
		else if (stack_c(GET_ARR, 0)[i] == PA)
			pa();
		else if (stack_c(GET_ARR, 0)[i] == PB)
			pb();
		i++;
	}
}

void	ft_writeerr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	write(2, s, i);
}
