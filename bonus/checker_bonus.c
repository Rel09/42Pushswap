/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:36:49 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:57:29 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

int	main(int argv, char **argc)
{
	if (!parse_args(argv, argc) || !parse_stdin())
		return (errormsg(1));
	read_instr();
	if (is_sorted())
		printf("OK\n");
	else
		printf("KO\n");
	return (errormsg(2));
}
