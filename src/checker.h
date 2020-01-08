/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miclaude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:35:18 by miclaude          #+#    #+#             */
/*   Updated: 2018/04/17 14:48:25 by miclaude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct		s_list
{
	int				nb;
	char			pad[4];
	struct s_list	*next;
}					t_list;

t_list				*ft_create_elem(int i);
t_list				*ft_list_last(t_list *begin_list);
t_list				*ft_delete_back_list(t_list *begin_list);
void				ft_list_push_back(t_list **begin_list, int i);
void				ft_list_push_front(t_list **begin_list, int i);
void				print(t_list *list);
void				ft_list_clear(t_list **begin_list);
int					checker(int argc, char **argv);
int					instructions(char *line, t_list **pa, t_list **pb);
int					swap(char *line, t_list **pa, t_list **pb);
int					push(char *line, t_list **pa, t_list **pb);
int					rotate(char *line, t_list **pa, t_list **pb);
int					reverse_rotate(char *line, t_list **pa, t_list **pb);
int					tri(t_list *pa);
int					check_tri(t_list *pa, t_list *pb);
#endif
