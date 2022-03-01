NAME		= push_swap

SRCS			= main \
				parse/parse_argv \
				parse/insert_list \
				parse/free_multi_array

SRCS = $(addsuffix .c, $(FILES))

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
