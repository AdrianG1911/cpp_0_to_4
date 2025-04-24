# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 13:02:59 by adrgutie          #+#    #+#              #
#    Updated: 2025/04/24 19:48:28 by adrgutie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02
CXX			= c++
RM			= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp \
			  Fixed.cpp

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