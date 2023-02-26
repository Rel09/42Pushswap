/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:31:20 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/07 13:09:18 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	main(int argv, char **argc)
{
	if (!parse_args(argv, argc))
		return (error_msg(1, argv));
	if (*stack_a(GET_SIZE, 0) == 1)
		return (free_all());
	else if (*stack_a(GET_SIZE, 0) == 2)
		sort_two();
	else if (*stack_a(GET_SIZE, 0) == 3)
		sort_three();
	else if (*stack_a(GET_SIZE, 0) == 4 && !is_sorted())
	{
		pb();
		sort_three();
		push_back();
		final_sort();
	}
	else if (!is_sorted())
	{
		sort_all();
		sort_three();
		push_back();
		final_sort();
	}
	return (free_all());
}
