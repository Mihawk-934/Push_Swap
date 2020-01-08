/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 11:35:19 by miclaude          #+#    #+#             */
/*   Updated: 2018/04/17 14:48:06 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	tri(t_list *pa)
{
	while (pa && pa->next)
	{
		if (pa->nb > pa->next->nb)
			return (0);
		pa = pa->next;
	}
	return (1);
}

int	check_tri(t_list *pa, t_list *pb)
{
	if (pb != NULL || tri(pa) == 0)
	{
		ft_putendl("KO");
		return (0);
	}
	ft_putendl("OK");
	return (1);
}
