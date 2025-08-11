# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 15:40:11 by jwolfram          #+#    #+#              #
#    Updated: 2025/08/11 21:29:34 by jwolfram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = first_class

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

SRCS_DIR = src

SRCS = main.cpp \
	   Fixed.cpp

OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJS}
		bear --append -- ${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
