# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 14:55:17 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/01 18:21:27 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = account
SRCS = Account.cpp\
		tests.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)
	@echo "cleaned the files!"

fclean: clean
	rm -f $(NAME)
	@echo "force clean!"

re: fclean all
	@echo "remaking the files."