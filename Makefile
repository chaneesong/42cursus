NAME		= libftprintf.a

FILES			= ft_printf \
				ft_print_type \
				ft_print_char \
				ft_print_str \
				ft_print_int \
				ft_print_unsigned_int \
				ft_print_void_ptr \
				ft_print_hex_lower \
				ft_print_hex_upper \
				ft_putchar_fd \
				ft_putstr_fd \
				ft_itoa \
				ft_strlen \
				ft_check_size

SRCS = $(addprefix srcs/, $(addsuffix .c, $(FILES)))

AR			= ar rcs

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

OBJS_SRCS	= $(SRCS:.c=.o)

OBJS = $(OBJS_SRCS)

$(NAME): 	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

.c.o:		$(SRCS)
			$(CC) $(CFLAGS) -c -o $@ $<

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re libft
