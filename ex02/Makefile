# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcummins <jcummins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:08:59 by jcummins          #+#    #+#              #
#    Updated: 2024/11/19 17:30:40 by jcummins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstractclass

CXX = c++
CXXFLAGS = -g -Werror -Wextra -Wall -pedantic -std=c++98

SRCS = AAnimal.cpp AWrongAnimal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp WrongCat.cpp
OBJS = $(SRCS:%.cpp=%.o)
HEADS = AAnimal.hpp AWrongAnimal.hpp Brain.hpp Cat.hpp Dog.hpp WrongCat.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@echo "✅ Linking object files into executable $@"

%.o: %.cpp $(HEADS)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "✅ Complied object file $@ from source file $<"

clean:
	@echo "💥 Removing all object files"
	@rm -f $(OBJS)

fclean: clean
	@echo "💥 Removing executable"
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
