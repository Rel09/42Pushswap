/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_tools2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 04:38:05 by dpotvin           #+#    #+#             */
/*   Updated: 2023/01/31 06:00:23 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

t_instr	save_command(int a, uint8_t b, int c, uint8_t d)
{
	t_instr	t;

	t.a_count = a;
	t.a_instr = b;
	t.b_count = c;
	t.b_instr = d;
	return (t);
}

t_move	bestmove(int a, int b)
{
	t_cost	t;
	t_move	bestmove;
	int		mode;
	int		merged;
	int		leftover;

	t = init_distance_value(a, b);
	leftover = absolute(t.a_up - t.b_up);
	merged = max(t.a_up, t.b_up) - leftover;
	mode = get_mode(t.a_up, t.b_up, 0);
	bestmove = get_moves(leftover, merged, mode, 0);
	leftover = absolute(t.a_down - t.b_down);
	merged = max(t.a_down, t.b_down) - leftover;
	mode = get_mode(t.a_down, t.b_down, 1);
	if (leftover + merged < bestmove.cost)
		bestmove = get_moves(leftover, merged, mode, 1);
	if (t.a_up + t.b_down < bestmove.cost)
		bestmove = get_moves(t.a_up, t.b_down, 0, 2);
	if (t.a_down + t.b_up < bestmove.cost)
		bestmove = get_moves(t.a_down, t.b_up, 0, 3);
	return (bestmove);
}

void	execute_algo(uint8_t ins, int count)
{
	int	i;

	i = -1;
	while (++i < count)
	{
		if (ins == RA)
			ra();
		else if (ins == RB)
			rb();
		else if (ins == RR)
			rr();
		else if (ins == RRA)
			rra();
		else if (ins == RRB)
			rrb();
		else if (ins == RRR)
			rrr();
		else
			continue ;
	}
}
