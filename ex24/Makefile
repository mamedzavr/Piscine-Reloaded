# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 19:44:42 by wqarro-v          #+#    #+#              #
#    Updated: 2018/11/26 12:58:14 by wqarro-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/*.c

INCLUDES = includes/

all: $(NAME)
$(NAME):
	gcc -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
