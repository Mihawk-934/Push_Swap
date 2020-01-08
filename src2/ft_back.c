/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:54:21 by miclaude          #+#    #+#             */
/*   Updated: 2018/03/29 13:53:50 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_list_push_back(t_list **begin_list, int i)
{
	t_list *list;

	list = *begin_list;
	if (list)
	{
		while (list && list->next)
			list = list->next;
		list->next = ft_create_elem(i);
	}
	else
		*begin_list = ft_create_elem(i);
}
