NAME		= push_swap

SRCS			= push_swap.c \
				init/init_push.c \
				parse/parse_argv.c \
				utils/ft_split.c \
				utils/ft_atoi.c \
				utils/ft_calloc.c

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
