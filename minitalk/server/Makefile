NAME		= server

SRCS		= server.c \
			ft_put.c

OBJS		= $(SRCS:.c=.o)

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re