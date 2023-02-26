/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 02:46:57 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:18:11 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

uint8_t	parse_args(int argv, char **argc)
{
	int		i;
	long	num;
	int		wcount;

	if (argv < 2)
		return (0);
	i = 1;
	while (argc[i])
	{
		wcount = get_str_int_count(argc[i]);
		if (!is_numeric(argc[i]))
			return (0);
		else if (wcount == 1)
		{
			num = ft_atoi(argc[i]);
			if (!is_int(num) || alreadylisted(num))
				return (0);
			stack_a(ADD_LAST, ft_atoi(argc[i]));
		}
		else if (wcount > 1 && !split_and_add(argc[i]))
			return (0);
		i++;
	}
	return (1);
}

uint8_t	alreadylisted(const int num)
{
	int	i;
	int	*arr;
	int	size;

	arr = stack_a(GET_ARR, 0);
	size = *stack_a(GET_SIZE, 0);
	i = -1;
	while (++i < size)
	{
		if (arr[i] == num)
			return (1);
	}
	return (0);
}
