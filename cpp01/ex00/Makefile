NAME		=	zombie

SRCS		=	main.cpp		\
				Zombie.cpp		\
				newZombie.cpp	\
				randomChump.cpp
HEADER		=	Zombie.hpp

INCLUDES	=	.

CC			=	c++
RM			=	rm -rf
FLAGS		=	-Wall -Wextra -Werror -std=c++98

OBJS		=	$(SRCS:.cpp=.o)

%.o:			%.cpp $(HEADER)
				$(CC) $(FLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re
