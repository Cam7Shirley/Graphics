# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshirley <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/04 09:12:53 by cshirley          #+#    #+#              #
#    Updated: 2018/07/09 09:58:27 by cshirley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myfdf
SRC = grid.c main.c
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): libft
	gcc $(FLAGS) -I minilibx_macos -L. -lmlx -L./libft -lft -framework OpenGL -framework AppKit $(SRC)

libft:
	make -C ./libft

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
