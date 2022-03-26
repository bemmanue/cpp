NAME		=	violence
SRCS		=	main.cpp		\
				HumanA.cpp		\
				HumanB.cpp		\
				Weapon.cpp
CC			=	c++
RM			=	rm -rf
FLAGS		=	-Wall -Wextra -Werror -std=c++98
OBJS		=	$(SRCS:.cpp=.o)
HEADER		=	Weapon.hpp		\
				HumanA.hpp		\
				HumanB.hpp

%.o:			%.cpp $(HEADER)
				$(CC) $(FLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re
