/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingA_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:39:09 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:55:13 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

// Intervertit les 2 premiers éléments au sommet de la pile a
//Ne fait rien s’il n’y en a qu’un ou aucun
void	sa(void)
{
	int	*arr;
	int	size;

	arr = stack_a(GET_ARR, 0);
	size = *stack_a(GET_SIZE, 0);
	if (size >= 2)
		swap(&arr[0], &arr[1]);
}

// Intervertit les 2 premiers éléments au sommet de la pile b
// Ne fait rien s’il n’y en a qu’un ou aucun
void	sb(void)
{
	int	*arr;
	int	size;

	arr = stack_b(GET_ARR, 0);
	size = *stack_b(GET_SIZE, 0);
	if (size >= 2)
		swap(&arr[0], &arr[1]);
}

// sa et sb en même temps
void	ss(void)
{
	int	*arr;
	int	size;

	arr = stack_a(GET_ARR, 0);
	size = *stack_a(GET_SIZE, 0);
	if (size >= 2)
		swap(&arr[0], &arr[1]);
	arr = stack_b(GET_ARR, 0);
	size = *stack_b(GET_SIZE, 0);
	if (size >= 2)
		swap(&arr[0], &arr[1]);
}
