/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:44:19 by miclaude          #+#    #+#             */
/*   Updated: 2019/12/16 09:23:27 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	rotate_a(t_list **pa)
{
	t_list *tmp;

	tmp = *pa;
	if (*pa)
	{
		if ((*pa)->next)
		{
			*pa = (*pa)->next;
			ft_list_push_back(pa, tmp->nb);
		}
	}
	ft_putendl("ra");
	free(tmp);
	tmp = NULL;
	return (0);
}

int	rotate_b(t_list **pb)
{
	t_list *tmp;

	tmp = *pb;
	if (*pb)
	{
		if ((*pb)->next)
		{
			*pb = (*pb)->next;
			ft_list_push_back(pb, tmp->nb);
		}
	}
	ft_putendl("rb");
	free(tmp);
	tmp = NULL;
	return (0);
}
