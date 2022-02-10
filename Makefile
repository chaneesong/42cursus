# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 17:47:43 by chsong            #+#    #+#              #
#    Updated: 2022/02/10 15:59:40 by chsong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

FILES			= ft_printf \
				ft_parse_value \
				ft_parse_ap \
				ft_ctos \
				ft_stos \
				ft_itos \
				ft_utos \
				ft_ultos \
				ft_util \

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
