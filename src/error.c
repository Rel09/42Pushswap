/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:11:30 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/07 13:09:56 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

uint8_t	error_msg(const uint8_t flag, const uint8_t type)
{
	if (type < 2)
		return (0);
	else if (flag == 1)
		ft_writeerr("Error\n");
	return (0);
}
