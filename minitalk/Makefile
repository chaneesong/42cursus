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

all:		$(CLIENT) $(SERVER)

client:		$(CLIENT_OBJS)
			$(CC) $(CFLAGS) $(CLIENT_OBJS) -o $@

server:		$(SERVER_OBJS)
			$(CC) $(CFLAGS) $(SERVER_OBJS) -o $@

clean:
			$(RM) $(CLIENT_OBJS) $(SERVER_OBJS)

fclean:		clean
			$(RM) $(CLIENT) $(SERVER)

re:			fclean all

.PHONY:		all client server clean fclean re