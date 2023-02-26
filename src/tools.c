/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:52:50 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/25 05:27:15 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

long	ft_atoi(const char *s)
{
	int		n;
	int		i;
	long	num;

	i = 0;
	n = 1;
	num = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-' && n > 0)
			n *= -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		num = num * 10 + (s[i] - 48);
		i++;
	}
	return (num * n);
}

uint8_t	is_digit(const char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

uint8_t	is_numeric(const char *s)
{
	int			i;
	const char	*c;

	i = 0;
	while (s[i])
	{
		c = &s[i];
		if (!(is_digit(*c) || *c == 32 || (s[i] == 45 && (s[i - 1] == 32 || s[i - 1] == 0))))
			return (0);
		i++;
	}
	return (1);
}

uint8_t	is_int(const long i)
{
	if (i >= -2147483648 && i <= 2147483647)
		return (1);
	return (0);
}

uint8_t	ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}
