/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:38:09 by miclaude          #+#    #+#             */
/*   Updated: 2018/04/14 14:14:04 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	push_a(t_list **pa, t_list **pb)
{
	t_list *tmp;

	tmp = *pb;
	if (*pb)
	{
		if ((*pb)->next)
			*pb = (*pb)->next;
		else
			*pb = NULL;
		ft_list_push_front(pa, tmp->nb);
	}
	ft_putendl("pa");
	free(tmp);
	tmp = NULL;
	return (0);
}

int	push_b(t_list **pa, t_list **pb)
{
	t_list *tmp;

	tmp = *pa;
	if (*pa)
	{
		if ((*pa)->next)
			*pa = (*pa)->next;
		else
			*pa = NULL;
		ft_list_push_front(pb, tmp->nb);
	}
	ft_putendl("pb");
	free(tmp);
	tmp = NULL;
	return (0);
}
