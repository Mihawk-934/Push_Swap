/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:53:05 by miclaude          #+#    #+#             */
/*   Updated: 2018/04/13 19:02:57 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		range_5(t_list **pa, t_list **pb)
{
	int i;

	i = -1;
	while (++i < 2)
		push_b(pa, pb);
	range_3(pa);
	if (*pb && (*pb)->next)
		if ((*pb)->nb > (*pb)->next->nb)
			swap_b(pb);
	while (*pb)
	{
		if ((*pb)->nb > (*pa)->nb)
			rotate_a(pa);
		if ((*pb)->nb < (*pa)->nb
				|| (tri(*pa) == 1 && (*pb)->nb > l_nb(*pa)))
			push_a(pa, pb);
	}
	while ((*pa)->nb > l_nb(*pa))
		rotate_a(pa);
	return (0);
}

int		range_3(t_list **pa)
{
	if ((*pa) && (*pa)->next)
	{
		if (((*pa)->nb < (*pa)->next->nb && (*pa)->next->nb > l_nb(*pa)))
			reverse_rotate_a(pa);
		if ((((*pa)->nb > (*pa)->next->nb && (*pa)->next->nb < l_nb(*pa)
			&& (*pa)->nb > l_nb(*pa)) || ((*pa)->nb > (*pa)->next->nb
			&& (*pa)->next->nb > l_nb(*pa))))
			rotate_a(pa);
		if (((*pa)->nb > (*pa)->next->nb && (*pa)->next->nb <= l_nb(*pa)))
			swap_a(pa);
	}
	return (0);
}

int		range(t_list **pa, t_list **pb)
{
	if (tri(*pa) == 1)
		return (0);
	else if (ft_list_size(*pa) <= 3)
		range_3(pa);
	else if (ft_list_size(*pa) <= 5)
		range_5(pa, pb);
	else
		range2(pa, pb);
	return (0);
}
