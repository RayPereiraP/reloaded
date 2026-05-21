# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/21 10:21:34 by rayperei          #+#    #+#              #
#    Updated: 2026/05/21 10:21:37 by rayperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"

FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEAD = includes/

all : $(NAME)

$(NAME) :
	gcc -I=./$(HEAD) -c $(FILES)
	ar rc $(NAME) $(OBJ)

clean :
	/bin/rm -f  $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all