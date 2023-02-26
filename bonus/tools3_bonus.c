/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 03:00:39 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:54:19 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

uint8_t	intcheck(const char *s)
{
	if (*s == '-' && !is_digit(*(s + 1)))
		return (0);
	return (1);
}

uint8_t	parse_stdin(void)
{
	char	arr[4];
	int8_t	byte;
	char	c;
	int		i;

	i = 0;
	byte = read(STD_IN, &c, 1);
	while (byte != 0)
	{
		if (c != '\n')
			arr[i++] = c;
		if (i == 4 || c == '\n')
		{
			if (!valid_instr(arr))
				return (0);
			stack_c(ADD_LAST, valid_instr(arr));
			ft_memset(arr, 0, 4);
			i = 0;
		}
		byte = read(STD_IN, &c, 1);
	}
	return (1);
}
