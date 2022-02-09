# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 17:47:43 by chsong            #+#    #+#              #
#    Updated: 2022/02/09 20:16:24 by chsong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

FILES			= ft_print_char \
				ft_print_str \
				ft_print_int \
				ft_print_void_ptr \
				ft_print_hex_lower \
				ft_print_hex_upper \
				ft_print_unsigned_int \
				ft_ctos \
				ft_stos \
				ft_itos \
				ft_utos \
				ft_ultos \
				ft_ap_to_str \
				ft_print_type \
				ft_printf

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
			$(CC) $(CFLAGS) -c -o $@ $< -I.

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
