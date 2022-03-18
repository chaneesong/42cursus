NAME		= push_swap

SRCS			= push_swap.c \

# SRCS = $(addsuffix .c, $(FILES))

OBJSDIR		= objs

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

AR			= AR -rcs

OBJS	=	$(SRCS:.c=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -g -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re libft
