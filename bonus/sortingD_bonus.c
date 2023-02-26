/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingD_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 03:32:47 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:18:26 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

// Décale d’une position vers le bas tous les élements de
// la pile a. Le dernier élément devient le premier

void	rra(void)
{
	if (*stack_a(GET_SIZE, 0) >= 2)
		stack_a(REVROTATE, 0);
}
// Décale d’une position vers le bas tous les élements de
// la pile b. Le dernier élément devient le premier

void	rrb(void)
{
	if (*stack_b(GET_SIZE, 0) >= 2)
		stack_b(REVROTATE, 0);
}
// rra et rrb en même temps

void	rrr(void)
{
	if (*stack_a(GET_SIZE, 0) >= 2)
		stack_a(REVROTATE, 0);
	if (*stack_b(GET_SIZE, 0) >= 2)
		stack_b(REVROTATE, 0);
}
