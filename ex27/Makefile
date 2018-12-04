# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 17:53:50 by wqarro-v          #+#    #+#              #
#    Updated: 2018/11/26 12:42:23 by wqarro-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

HEAD = ft_display_file.h

LIB = libft_display_file.a

all: $(NAME)
$(NAME):
	gcc -I ./$(HEAD) -c $(SRC)
	ar rc $(LIB) *.o
	gcc -o $(NAME) main.c $(LIB) -I $(HEAD)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(LIB)
