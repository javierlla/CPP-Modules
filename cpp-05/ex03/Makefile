# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 11:18:57 by jllarena          #+#    #+#              #
#    Updated: 2025/02/10 16:30:56 by jllarena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME            = Intern
CC              = c++
RM              = rm -rf
FLAGS           = -Wall -Wextra -Werror -std=c++98

#FILES AND PATH

HEADER_SRCS = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp \
		      PresidentialPardonForm.hpp Intern.hpp\

HEADER_DIR  = includes/
HEADER      = $(addprefix $(HEADER_DIR), $(HEADER_SRCS))

MPATH_SRCS  = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
			  PresidentialPardonForm.cpp Intern.cpp\

MPATH_DIR   = mandatory/
MPATH       = $(addprefix $(MPATH_DIR), $(MPATH_SRCS))
OBJ_M       = $(MPATH:.cpp=.o)

#COMMANDS
all:        $(NAME)

$(NAME):    $(OBJ_M)
		    @$(CC) $(FLAGS) $(OBJ_M) -o $(NAME) 

%.o: %.cpp $(HEADER) Makefile
		    @$(CC) $(FLAGS) -c $< -o $@

clean:
	        @$(RM) $(OBJ_M)

fclean:	    clean
		    @$(RM) $(NAME)

re:         fclean all

.PHONY: all execute clean fclean re 