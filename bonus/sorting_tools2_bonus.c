/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tools2_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpotvin <dpotvin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 03:17:27 by dpotvin           #+#    #+#             */
/*   Updated: 2023/02/02 06:56:42 by dpotvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker_bonus.h"

int	*revrotate(int *arr, const int size)
{
	int	i;
	int	j;
	int	*temp;

	temp = malloc(size * sizeof(int));
	if (!temp)
		return (0);
	i = 0;
	j = 0;
	temp[i++] = arr[size - 1];
	while (i < size)
		temp[i++] = arr[j++];
	free(arr);
	return (temp);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
		ptr[i++] = (unsigned char)c;
	return (b);
}

uint8_t	ft_str(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (!(s1[i] == s2[i]))
			return (0);
		i++;
	}
	return (1);
}

uint8_t	valid_instr(char *s)
{
	if (ft_str(s, "rra"))
		return (13);
	else if (ft_str(s, "rrb"))
		return (14);
	else if (ft_str(s, "rrr"))
		return (15);
	else if (ft_str(s, "ra"))
		return (10);
	else if (ft_str(s, "rb"))
		return (11);
	else if (ft_str(s, "rr"))
		return (12);
	else if (ft_str(s, "sa"))
		return (16);
	else if (ft_str(s, "sb"))
		return (17);
	else if (ft_str(s, "ss"))
		return (18);
	else if (ft_str(s, "pa"))
		return (19);
	else if (ft_str(s, "pb"))
		return (20);
	return (0);
}
