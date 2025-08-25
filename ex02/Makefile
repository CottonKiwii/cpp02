# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 15:40:11 by jwolfram          #+#    #+#              #
#    Updated: 2025/08/25 15:30:52 by jwolfram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = now_we_are_talking

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

SRCS_DIR = src

SRCS = main.cpp \
	   Fixed.cpp

OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
