/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:48:39 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:57:38 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

uint8_t	errormsg(uint8_t flag)
{
	stack_a(FREE, 0);
	stack_b(FREE, 0);
	stack_c(FREE, 0);
	if (flag == 1)
		ft_writeerr("Error\n");
	else if (flag == 2)
		return (1);
	return (0);
}
