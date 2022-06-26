# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mocharfa <mocharfa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 03:35:39 by mocharfa          #+#    #+#              #
#    Updated: 2022/06/26 04:51:11 by mocharfa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = *.c ./ft_printf/*.c ./Libft/*.c
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
CC = cc

all : push_swap
	
$(NAME): $(src)	
	@$(CC) $(FLAGS) $(src) -o $(NAME) -fsanitize=address -g

clean :
	@rm -f $(NAME)

fclean : clean

re: fclean all