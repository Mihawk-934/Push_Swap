/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:55:43 by miclaude          #+#    #+#             */
/*   Updated: 2018/03/31 12:27:53 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list	*ft_create_elem(int i)
{
	t_list *list;

	list = NULL;
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->nb = i;
	list->next = NULL;
	return (list);
}
