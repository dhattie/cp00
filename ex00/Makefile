NAME		=	megaphone

CC			=	c++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror
RM			=	rm -f

SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

.PHONY		:	all clean fclean re test

$(NAME)		:	$(OBJS)
				$(CC) -o $@ $^

all			:	$(NAME)

%.o			:	%.cpp
				$(CC) $(CFLAGS) -c -o $@ $<

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)

test		:	$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone

re:				fclean all
