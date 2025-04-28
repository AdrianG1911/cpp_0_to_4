# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 18:28:16 by adrgutie          #+#    #+#              #
#    Updated: 2025/04/28 19:06:59 by adrgutie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02
CXX			= c++
RM			= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp \
			  ClapTrap.cpp \
			  ScavTrap.cpp \
			  FragTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re