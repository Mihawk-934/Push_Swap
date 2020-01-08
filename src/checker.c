/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:12:23 by miclaude          #+#    #+#             */
/*   Updated: 2018/04/17 15:49:49 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	int		check_instruction(char *line, t_list **pa, t_list **pb)
{
	if (ft_strcmp("sa", line) != 0 && ft_strcmp("sb", line) != 0 &&
			ft_strcmp("ss", line) != 0 && ft_strcmp("pa", line) != 0 &&
			ft_strcmp("pb", line) != 0 && ft_strcmp("ra", line) != 0 &&
			ft_strcmp("rb", line) != 0 && ft_strcmp("rr", line) != 0 &&
			ft_strcmp("rra", line) != 0 && ft_strcmp("rrb", line) != 0 &&
			ft_strcmp("rrr", line) != 0)
	{
		ft_putendl("Error");
		ft_list_clear(pa);
		ft_list_clear(pb);
		ft_strdel(&line);
		return (0);
	}
	instructions(line, pa, pb);
	return (1);
}

static	int		check_nb_and_int(char **argv, int i)
{
	int	j;

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
	long	a;

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

int				checker(int argc, char **argv)
{
	t_list	*pa;
	t_list	*pb;
	char	*line;
	int		i;

	pa = NULL;
	pb = NULL;
	line = NULL;
	i = 1;
	while (i < argc)
	{
		if (check(argv, i, pa) == 0)
			exit(0);
		ft_list_push_back(&pa, ft_atoi(argv[i++]));
	}
	while (get_next_line(0, &line))
	{
		if (check_instruction(line, &pa, &pb) == 0)
			return (0);
		ft_strdel(&line);
	}
	check_tri(pa, pb);
	ft_list_clear(&pa);
	ft_list_clear(&pb);
	return (0);
}
