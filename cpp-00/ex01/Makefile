# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 18:25:16 by jllarena          #+#    #+#              #
#    Updated: 2024/11/26 18:47:59 by jllarena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook
SRC := 	main.cpp \
		PhoneBook.cpp \
		Contact.cpp \

CXX = c++
RM := rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJS):%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re