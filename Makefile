# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miclaude <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 14:27:03 by miclaude          #+#    #+#              #
#    Updated: 2018/04/16 16:25:46 by miclaude         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

NAME2 = push_swap

GCC = gcc

#C_FLAGS = -c -Wall -Wextra -Werror
C_FLAGS = -c -Weverything

SRC = 	check_tri.c \
		checker.c \
		ft_back.c \
		ft_create_elem.c \
		ft_delete_back_list.c \
		ft_front.c \
		ft_list_last.c \
		ft_print_list.c \
		instructions.c \
		push.c \
		reverse_rotate.c \
		rotate.c \
		swap.c \
		ft_list_clear.c \
		main.c

SRC2 =	push_swap.c \
		ft_back.c \
		ft_create_elem.c \
		ft_delete_back_list.c \
		ft_front.c \
		ft_last_nb.c \
		ft_list_last.c \
		ft_list_size.c \
		ft_print_list.c \
		middle.c \
		push.c \
		range.c \
		range2.c \
		reverse_rotate.c \
		rotate.c \
		swap.c \
		tri.c \
		ft_list_clear.c \
		main.c

OBJ = $(addprefix src/,$(SRC:.c=.o))

OBJ2 = $(addprefix src2/,$(SRC2:.c=.o))

all: $(NAME) $(NAME2)

$(NAME): $(OBJ)
	@make -C libft/
	@gcc $(OBJ) -o $(NAME) -L libft -lft

$(NAME2): $(OBJ2)
	@make -C libft/
	@gcc $(OBJ2) -o $(NAME2) -L libft -lft

%.o: %.c
	$(GCC) -o $@ -c $< $(C_FLAGS)

clean:
	make clean -C libft
	@rm -f $(OBJ) $(OBJ2)

fclean: clean
	make fclean -C libft
	@rm -f $(NAME) $(NAME2)

re: fclean all
