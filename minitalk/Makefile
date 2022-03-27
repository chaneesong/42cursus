CLIENT		= client
SERVER		= server

CLIENT_SRCS			= client.c \
					ft_atoi.c \
					ft_put.c

SERVER_SRCS			= server.c \
					ft_put.c

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

CLIENT_OBJS	=	$(CLIENT_SRCS:.c=.o)
SERVER_OBJS	=	$(SERVER_SRCS:.c=.o)

$(CLIENT):	$(CLIENT_OBJS)
			$(CC) $(CLIENT_OBJS) -o $@

$(SERVER):	$(SERVER_OBJS)
			$(CC) $(SERVER_OBJS) -o $@

all:		$(CLIENT) $(SERVER)

clean:
			$(RM) $(CLIENT_OBJS) $(SERVER_OBJS)

fclean:		clean
			$(RM) $(CLIENT) $(SERVER)

re:			fclean all

.PHONY:		all client server clean fclean re