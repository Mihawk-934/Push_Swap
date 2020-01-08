/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:38:09 by miclaude          #+#    #+#             */
/*   Updated: 2019/12/16 09:22:46 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	int	push_a(t_list **pa, t_list **pb)
{
	t_list	*tmp;

	tmp = *pb;
	if (*pb)
	{
		if ((*pb)->next)
			*pb = (*pb)->next;
		else
			*pb = NULL;
		ft_list_push_front(pa, tmp->nb);
	}
	free(tmp);
	tmp = NULL;
	return (0);
}

static	int	push_b(t_list **pa, t_list **pb)
{
	t_list	*tmp;

	tmp = *pa;
	if (*pa)
	{
		if ((*pa)->next)
			*pa = (*pa)->next;
		else
			*pa = NULL;
		ft_list_push_front(pb, tmp->nb);
	}
	free(tmp);
	tmp = NULL;
	return (0);
}

int			push(char *line, t_list **pa, t_list **pb)
{
	if (ft_strcmp("pa", line) == 0)
		push_a(pa, pb);
	if (ft_strcmp("pb", line) == 0)
		push_b(pa, pb);
	return (0);
}
