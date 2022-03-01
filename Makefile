NAME		= push_swap

SRCS			= main.c \
				parse/parse_argv.c \
				parse/insert_list.c

# SRCS = $(addsuffix .c, $(FILES))

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

AR			= AR -rcs

OBJS	= $(SRCS:.c=.o)

$(NAME): 	libft
			$(CC) $(CFLAGS) $(SRCS) libft/libft.a -o $@

all:		$(NAME)

libft:
			$(MAKE) -C ./libft all
clean:
			$(MAKE) -C ./libft clean
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(MAKE) -C ./libft fclean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re libft
