/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 03:30:30 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/27 19:39:59 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

// Stack A
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
// Stack B

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
