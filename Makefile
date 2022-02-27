NAME		= push_swap

FILES			= main

SRCS = $(addsuffix .c, $(FILES))

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

AR			= AR -rcs

OBJS	= $(SRCS:.c=.o)

$(NAME): 	$(SRCS) libft
			$(CC) $(CFLAGS) $< libft/libft.a -o $@

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
