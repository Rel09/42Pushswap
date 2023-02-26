/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingB.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:54:42 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/26 03:32:25 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

// Prend le premier élément au sommet de b et le met sur a
// Ne fait rien si b est vide
void	pa(void)
{
	if (*stack_b(GET_SIZE, 0) >= 1)
	{
		printf("pa\n");
		stack_a(ADD_FIRST, stack_b(GET_ARR, 0)[0]);
		stack_b(REM_FIRST, 0);
	}
}

// Prend le premier élément au sommet de a et le met sur b.
// Ne fait rien si a est vide.
void	pb(void)
{
	if (*stack_a(GET_SIZE, 0) >= 1)
	{
		printf("pb\n");
		stack_b(ADD_FIRST, stack_a(GET_ARR, 0)[0]);
		stack_a(REM_FIRST, 0);
	}
}
