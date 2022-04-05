NAME			=	intern

CC				=	c++

FLAGS			=	 -Wall -Wextra -Werror -std=c++98

SRC				=	main.cpp					\
					Bureaucrat.cpp				\
					Form.cpp					\
					PresidentialPardonForm.cpp	\
					RobotomyRequestForm.cpp		\
					ShrubberyCreationForm.cpp	\
					Intern.cpp

OBJ				=	$(SRC:.cpp=.o)
OBJ_DIR			:=	./objects/
OBJS			=	$(addprefix $(OBJ_DIR), $(OBJ))


all:				$(NAME)

$(NAME):			$(OBJS)
					@$(CC) -o $@ $^
					@echo "\033[32m"Make DONE

$(OBJ_DIR)%.o:		%.cpp
					@mkdir -p $(OBJ_DIR)
					@$(CC) -c $< -o $@

clean:
					@rm -rf $(OBJ_DIR)
					@echo "\033[32m"clean DONE

fclean:				clean
					@rm -rf $(NAME) *_shrubbery
					@echo "\033[32m"fclean DONE

re:					fclean all

.PHONY:				all fclean clean re
