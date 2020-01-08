/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:35:18 by miclaude          #+#    #+#             */
/*   Updated: 2018/04/15 19:01:25 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"
# include <stdio.h>

typedef struct		s_list
{
	int				nb;
	int				pad;
	struct s_list	*next;
}					t_list;

t_list				*ft_create_elem(int i);
t_list				*ft_list_last(t_list *begin_list);
t_list				*ft_delete_back_list(t_list *begin_list);
int					ft_list_size(t_list *begin_list);
void				ft_list_clear(t_list **begin_list);
void				ft_list_push_back(t_list **begin_list, int i);
void				ft_list_push_front(t_list **begin_list, int i);
void				print(t_list *pa, t_list *pb);
int					l_nb(t_list *list);
int					tri(t_list *pa);
int					push_swap(int argc, char **argv);
int					swap_a(t_list **pa);
int					swap_b(t_list **pb);
int					push_a(t_list **pa, t_list **pb);
int					push_b(t_list **pa, t_list **pb);
int					rotate_a(t_list **pa);
int					rotate_b(t_list **pb);
int					reverse_rotate_a(t_list **pa);
int					reverse_rotate_b(t_list **pb);
int					range(t_list **pa, t_list **pb);
int					middle(t_list **tab, int size);
int					range_3(t_list **pa);
int					range_5(t_list **pa, t_list **pb);
int					range2(t_list **pa, t_list **pb);

#endif
