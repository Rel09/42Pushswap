/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingC_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 03:18:48 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:18:24 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

// Décale d’une position vers le haut tous les élements de la pile a
// Le premier élément devient le dernier

void	ra(void)
{
	if (*stack_a(GET_SIZE, 0) >= 2)
		stack_a(ROTATE, 0);
}

// Décale d’une position vers le haut tous les élements de la pile b.
// Le premier élément devient le dernier.

void	rb(void)
{
	if (*stack_b(GET_SIZE, 0) >= 2)
		stack_b(ROTATE, 0);
}
// ra et rb en même temps

void	rr(void)
{
	printf("rr\n");
	if (*stack_a(GET_SIZE, 0) >= 2)
		stack_a(ROTATE, 0);
	if (*stack_b(GET_SIZE, 0) >= 2)
		stack_b(ROTATE, 0);
}
