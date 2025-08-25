# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 15:40:11 by jwolfram          #+#    #+#              #
#    Updated: 2025/08/14 00:21:34 by jwolfram         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP

RM = rm -fr

INCLUDE = -I./include

SRCS_DIR = src
OBJS_DIR = obj

SRCS = main.cpp \
	   Fixed.cpp \
	   Point.cpp \
	   bsp.cpp

OBJS = ${SRCS:%.cpp=${OBJS_DIR}/%.o}
DEPS = ${SRCS:%.cpp=${OBJS_DIR}/%.d}

OBJS_DIRS = ${sort ${dir ${OBJS}}}

all: ${NAME}

${NAME}: ${OBJS}
		${CXX} ${CXXFLAGS} ${INCLUDE} ${OBJS} -o ${NAME}

${OBJS_DIR}/%.o: ${SRCS_DIR}/%.cpp | ${OBJS_DIRS}
		bear --append -- ${CXX} ${CXXFLAGS} ${INCLUDE} -c $< -o $@
		
${OBJS_DIRS}:
		mkdir -p $@

-include ${DEPS}

clean:
		${RM} ${OBJS_DIR}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
