/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:32:33 by miclaude          #+#    #+#             */
/*   Updated: 2019/12/16 09:21:59 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	int	swap_a(t_list **pa)
{
	int	tmp;

	tmp = 0;
	if ((*pa) && (*pa)->next)
	{
		tmp = (*pa)->next->nb;
		(*pa)->next->nb = (*pa)->nb;
		(*pa)->nb = tmp;
	}
	return (0);
}

static	int	swap_b(t_list **pb)
{
	int	tmp;

	tmp = 0;
	if ((*pb) && (*pb)->next)
	{
		tmp = (*pb)->next->nb;
		(*pb)->next->nb = (*pb)->nb;
		(*pb)->nb = tmp;
	}
	return (0);
}

int			swap(char *line, t_list **pa, t_list **pb)
{
	if (ft_strcmp("sa", line) == 0)
		swap_a(pa);
	if (ft_strcmp("sb", line) == 0)
		swap_b(pb);
	if (ft_strcmp("ss", line) == 0)
	{
		swap_a(pa);
		swap_b(pb);
	}
	return (0);
}
