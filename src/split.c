/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:23:04 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/31 05:57:17 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

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

uint8_t	intcheck(const char *s)
{
	if (*s == '-' && !is_digit(*(s + 1)))
		return (0);
	return (1);
}
