NAME		= push_swap

SRCS			= push_swap.c \
				init/parse_argv.c \
				init/create_node.c \
				init/push.c \
				init/pop.c \
				init/parse_index.c \
				utils/ft_split.c \
				utils/ft_atoi.c \
				utils/print_error.c \
				utils/ft_calloc.c \
				utils/print_operator.c \
				operators/sa.c \
				operators/sb.c \
				operators/ss.c \
				operators/pa.c \
				operators/pb.c \
				operators/ra.c \
				operators/rb.c \
				operators/rr.c \
				operators/rra.c \
				operators/rrb.c \
				operators/rrr.c \
				sort/sort_stack.c \
				sort/sort_two_node.c \
				sort/sort_three_node.c \
				sort/sort_five_node.c \
				sort/a_to_b.c \

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

AR			= AR -rcs

OBJS	=	$(SRCS:.c=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re libft
