NAME		= push_swap

FILES			= main

SRCS = $(addsuffix .c, $(FILES))

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

OBJS	= $(SRCS:.c=.o)

$(NAME): 	$(SRCS)
			$(CC) $(CFLAGS) $< -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re libft
