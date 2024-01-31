# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachen <yachen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 14:21:49 by yachen            #+#    #+#              #
#    Updated: 2024/01/31 18:00:11 by yachen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\e[32m\n==================================="
		@echo "\e[32mCompiling Account----------------"
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "\e[32m---created with success : Account"
		@echo "\e[32m===================================\n\e[0m"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning Account----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----Account Cleaned"
	@echo "\e[32m=====================\n\e[0m"

fclean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning Account----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----Account Cleaned"
	@rm -rf $(NAME)
	@echo "\e[32m=====================\n\e[0m"

re: fclean all

.PHONY: clean fclean all re bonus
