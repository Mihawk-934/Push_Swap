/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 09:25:29 by miclaude          #+#    #+#             */
/*   Updated: 2019/12/16 09:25:31 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	int	remp(t_list **pa, t_list **pb)
{
	int	i;

	i = 0;
	if ((*pb)->next)
	{
		if ((*pb)->next->nb > (*pb)->nb && (*pb)->next->nb >= l_nb(*pb))
			rotate_b(pb);
		else if (l_nb(*pb) > (*pb)->nb && l_nb(*pb) >= (*pb)->next->nb)
			reverse_rotate_b(pb);
	}
	while ((*pb)->nb > (*pa)->nb)
	{
		rotate_a(pa);
		i++;
	}
	push_a(pa, pb);
	while (i > 0)
	{
		reverse_rotate_a(pa);
		i--;
	}
	return (0);
}

static	int	cut(t_list **pa, t_list **pb, int m, int i)
{
	if (!*pa)
		return (0);
	if ((*pa)->nb <= m)
	{
		push_b(pa, pb);
		if ((*pb)->next)
		{
			if ((*pb)->nb < l_nb(*pb))
				rotate_b(pb);
			else if ((*pb)->nb < (*pb)->next->nb)
				swap_b(pb);
		}
		cut(pa, pb, middle(pa, i), i);
	}
	else
	{
		rotate_a(pa);
		cut(pa, pb, m, i);
	}
	return (0);
}

int			range2(t_list **pa, t_list **pb)
{
	int	m;
	int	i;

	i = 0;
	if (ft_list_size(*pa) < 50)
		i = 2;
	else if (ft_list_size(*pa) <= 300)
		i = 9;
	else if (ft_list_size(*pa) > 300)
		i = 18;
	m = middle(pa, i);
	cut(pa, pb, m, i);
	push_a(pa, pb);
	while (*pb)
		remp(pa, pb);
	return (0);
}
