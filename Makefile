NAME		= libftprintf.a

FILES			= ft_print_char \
				ft_print_str \
				ft_print_int \
				ft_print_void_ptr \
				ft_print_hex_lower \
				ft_print_hex_upper \
				ft_print_unsigned_int \
				ft_print_type \
				ft_print_format \
				ft_printf

SRCS = $(addprefix srcs/, $(addsuffix .c, $(FILES)))

AR			= ar rcs

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

OBJS_SRCS	= $(SRCS:.c=.o)

OBJS = $(OBJS_SRCS)

$(NAME): 	$(OBJS) libft
			cp libft/libft.a ./$(NAME)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

libft:
			@$(MAKE) -C ./libft all

.c.o:		$(SRCS) libft
			$(CC) $(CFLAGS) -c -o $@ $< -I.

clean:
			@$(MAKE) -C ./libft clean
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			@$(MAKE) -C ./libft fclean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re libft
