/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:32:33 by miclaude          #+#    #+#             */
/*   Updated: 2018/04/11 16:40:12 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	swap_a(t_list **pa)
{
	int tmp;

	tmp = 0;
	if ((*pa) && (*pa)->next)
	{
		tmp = (*pa)->next->nb;
		(*pa)->next->nb = (*pa)->nb;
		(*pa)->nb = tmp;
	}
	ft_putendl("sa");
	return (0);
}

int	swap_b(t_list **pb)
{
	int tmp;

	tmp = 0;
	if ((*pb) && (*pb)->next)
	{
		tmp = (*pb)->next->nb;
		(*pb)->next->nb = (*pb)->nb;
		(*pb)->nb = tmp;
	}
	ft_putendl("sb");
	return (0);
}
