/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 05:07:57 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/31 02:21:07 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	absolute(int i)
{
	if (i < 0)
		i = -i;
	return (i);
}

int	max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}
