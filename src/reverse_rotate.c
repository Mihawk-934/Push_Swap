/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:48:50 by miclaude          #+#    #+#             */
/*   Updated: 2019/12/16 09:22:28 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	int	reverse_rotate_a(t_list **pa)
{
	t_list	*tmp;

	tmp = ft_list_last(*pa);
	if (*pa)
	{
		if ((*pa)->next)
		{
			ft_list_push_front(pa, tmp->nb);
			*pa = ft_delete_back_list(*pa);
		}
	}
	return (0);
}

static	int	reverse_rotate_b(t_list **pb)
{
	t_list	*tmp;

	tmp = ft_list_last(*pb);
	if (*pb)
	{
		if ((*pb)->next)
		{
			ft_list_push_front(pb, tmp->nb);
			*pb = ft_delete_back_list(*pb);
		}
	}
	return (0);
}

int			reverse_rotate(char *line, t_list **pa, t_list **pb)
{
	if (ft_strcmp("rra", line) == 0)
		reverse_rotate_a(pa);
	if (ft_strcmp("rrb", line) == 0)
		reverse_rotate_b(pb);
	if (ft_strcmp("rrr", line) == 0)
	{
		reverse_rotate_a(pa);
		reverse_rotate_b(pb);
	}
	return (0);
}
