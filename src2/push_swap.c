/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:12:23 by miclaude          #+#    #+#             */
/*   Updated: 2018/04/16 16:24:17 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	int		check_nb_and_int(char **argv, int i)
{
	int j;

	j = 0;
	if (argv[i][j] == '-')
		j++;
	while (argv[i][j])
	{
		if (ft_isdigit(argv[i][j]) == 0)
		{
			ft_putendl("Error");
			return (0);
		}
		j++;
	}
	j = 0;
	while (argv[i][j] == '0')
		j++;
	if (ft_strlen(&argv[i][j]) > 11 ||
			(ft_atol(argv[i]) < INT_MIN || ft_atol(argv[i]) > INT_MAX))
	{
		ft_putendl("Error");
		return (0);
	}
	return (1);
}

static	int		check_doublon(char **argv, t_list *pa, int i)
{
	long a;

	a = ft_atol(argv[i]);
	while (pa)
	{
		if (pa->nb == a)
		{
			ft_putendl("Error");
			return (0);
		}
		pa = pa->next;
	}
	return (1);
}

static	int		check(char **argv, int i, t_list *pa)
{
	if (check_nb_and_int(argv, i) == 0)
		return (0);
	if (check_doublon(argv, pa, i) == 0)
		return (0);
	return (1);
}

int				push_swap(int argc, char **argv)
{
	t_list	*pa;
	t_list	*pb;
	int		i;

	pa = NULL;
	pb = NULL;
	i = 1;
	if (argc <= 1)
		return (0);
	while (i < argc)
	{
		if (check(argv, i, pa) == 0)
			exit(0);
		ft_list_push_back(&pa, ft_atoi(argv[i++]));
	}
	range(&pa, &pb);
	ft_list_clear(&pa);
	return (0);
}
