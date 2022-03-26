
NAME			=	phonebook
SRCS			=	main.cpp		\
					Contact.cpp		\
					PhoneBook.cpp
OBJS			=	$(SRCS:.cpp=.o)
CC				=	c++
CFLAGS			= 	-Wall -Wextra -Werror
RM				=	rm -rf

all:				$(NAME)

$(NAME):			$(OBJS)
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
