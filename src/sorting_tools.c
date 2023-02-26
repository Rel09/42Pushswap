/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:44:20 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/26 04:05:20 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

// Swap two values

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// Add Int at last position

int	*add_last(int *arr, const int new_value, const int size)
{
	int	i;
	int	*temp;

	if (arr)
	{
		temp = malloc(size * sizeof(int));
		i = -1;
		while (++i < size - 1)
			temp[i] = arr[i];
		temp[i] = new_value;
		free(arr);
	}
	else
	{
		temp = malloc(1 * sizeof(int));
		temp[0] = new_value;
	}
	return (temp);
}
// Add Int at First position

int	*add_first(int *arr, const int new_value, const int size)
{
	int	i;
	int	j;
	int	*temp;

	temp = malloc(size * sizeof(int));
	if (!temp)
		return (0);
	i = 0;
	j = 0;
	temp[i++] = new_value;
	while (i < size)
		temp[i++] = arr[j++];
	free(arr);
	return (temp);
}
// Remove First Int

int	*remove_first(int *arr, const int size)
{
	int	i;
	int	j;
	int	*temp;

	temp = malloc(size * sizeof(int));
	if (!temp)
		return (0);
	i = 0;
	j = 1;
	while (i < size)
		temp[i++] = arr[j++];
	free(arr);
	return (temp);
}
// First is last, and increment the rest by one

int	*rotate(int *arr, const int size)
{
	int	i;
	int	j;
	int	*temp;

	temp = malloc(size * sizeof(int));
	if (!temp)
		return (0);
	i = 0;
	j = 0;
	temp[size - 1] = arr[i++];
	while (i < size)
		temp[j++] = arr[i++];
	free(arr);
	return (temp);
}
