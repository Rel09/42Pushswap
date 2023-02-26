/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 02:58:57 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:18:32 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

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

uint8_t	get_str_int_count(const char *s)
{
	int	i;
	int	mode;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		mode = 0;
		while (s[i] && !is_digit(s[i]) && s[i] != '-')
			i++;
		while (s[i] && (is_digit(s[i]) || s[i] == '-'))
		{
			if (!mode)
			{
				mode = 1;
				count++;
			}
			i++;
		}
	}
	return (count);
}

uint8_t	split_and_add(const char *s)
{
	long	num;

	while (*s)
	{
		while (*s && (!is_digit(*s) && *s != '-'))
			s++;
		if (*s != '\0')
		{
			num = ft_atoi(s);
			if (!is_int(num) || alreadylisted(num) || !intcheck(s))
				return (0);
			stack_a(ADD_LAST, num);
			while (*s && (is_digit(*s) || *s == '-'))
				s++;
		}
	}
	return (1);
}
