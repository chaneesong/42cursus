NAME		= libftprintf.a

FILES			= ft_print_char \
				ft_print_str \
				ft_print_int \
				ft_print_hex_lower \
				ft_print_hex_upper \
				ft_print_unsigned_int \
				ft_print_sign \
				ft_print_space \
				ft_print_type \
				ft_get_width \
				ft_get_precision \
				ft_lshift \
				ft_copy_target \
				ft_contain_data \
				ft_print_contain \
				ft_print_format \
				ft_printf

SRCS = $(addprefix srcs/, $(addsuffix .c, $(FILES)))

AR			= ar rcs

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

OBJS_SRCS	= $(SRCS:.c=.o)

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

ifdef _BONUS
	OBJS = $(OBJS_SRCS) $(OBJS_BONUS)
else
	OBJS = $(OBJS_SRCS)
endif

$(NAME): 	$(OBJS)
			$(AR) $@ $^

all:		$(NAME)

.c.o:		$(SRCS)
			$(CC) $(CFLAGS) -c -o $@ $<

bonus:
			make _BONUS=1 all

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
