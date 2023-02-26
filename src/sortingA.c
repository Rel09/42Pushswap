/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingA.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:39:09 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/26 03:32:29 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

// Intervertit les 2 premiers éléments au sommet de la pile a
//Ne fait rien s’il n’y en a qu’un ou aucun
void	sa(void)
{
	int	*arr;
	int	size;

	printf("sa\n");
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

	printf("sb\n");
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

	printf("ss\n");
	arr = stack_a(GET_ARR, 0);
	size = *stack_a(GET_SIZE, 0);
	if (size >= 2)
		swap(&arr[0], &arr[1]);
	arr = stack_b(GET_ARR, 0);
	size = *stack_b(GET_SIZE, 0);
	if (size >= 2)
		swap(&arr[0], &arr[1]);
}
