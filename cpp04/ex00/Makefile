# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 21:19:54 by airodrig          #+#    #+#              #
#    Updated: 2023/08/10 18:24:03 by airodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	animal

S			=	src/

O			=	obj/

H			=	-I inc/

FILES		=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp

SRCS		=	$(addprefix $S, $(FILES))

OBJS	=		$(SRCS:$S%.cpp=$O%.o)

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

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

$O%.o: $S%.cpp
	@[ -d $O ] || mkdir $O
	@printf "$(PUR)#$(NOCOL)"
	@$(CXX) $(CXXFLAGS) $H -c $< -o $@

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $H $(SRCS) -o $(NAME)
	@[ -e $(NAME) ] && echo "$(GRN) compilation succeeded ✅ $(NOCOL)"

clean:
	@${RM} $O
	@echo "$(BLU) objects clean 🧽$(NOCOL)"

fclean: clean
	@${RM} ${NAME}
	@echo "$(CYN) all clean 🧼$(NOCOL)"

re: fclean all

.PHONY: all clean fclean re
