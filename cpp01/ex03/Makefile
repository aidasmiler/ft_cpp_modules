# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 17:12:14 by airodrig          #+#    #+#              #
#    Updated: 2023/04/12 20:13:47 by airodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	violence

SRCS		=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -fsanitize=address

RM			=	rm -rf

NOCOL		=	\033[0m
RED			=	\033[1;31m
ORG			=	\033[0;33m
YEL			=	\033[1;33m
GRN			=	\033[1;32m
BLU			=	\033[0;34m
CYN			=	\033[0;36m
PUR			=	\033[0;35m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)
	@[ -e $(NAME) ] && echo "$(GRN) compilation succeeded ✅ $(NOCOL)"

clean:
	@${RM} ${OBJS}
	@echo "$(BLU) objects clean 🧽$(NOCOL)"

fclean: clean
	@${RM} ${NAME}
	@echo "$(CYN) all clean 🧼$(NOCOL)"

re: fclean all

.PHONY: all clean fclean re
