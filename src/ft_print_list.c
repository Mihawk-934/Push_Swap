/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:58:37 by miclaude          #+#    #+#             */
/*   Updated: 2018/03/29 13:58:07 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print(t_list *list)
{
	while (list)
	{
		ft_putnbr(list->nb);
		list = list->next;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
