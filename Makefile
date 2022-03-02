NAME		= push_swap

SRCS			= main.c \
				init/parse_argv.c \
				init/create_node.c \
				init/push_stack.c \
				utils/ft_split.c \
				utils/ft_atoi.c \
				utils/ft_isdigit.c

# SRCS = $(addsuffix .c, $(FILES))

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

AR			= AR -rcs

OBJS	= $(SRCS:.c=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re libft
