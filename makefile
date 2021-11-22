NAME		= libft.a

SRC			= ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

BONUS		= ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

SRC_PATH	= ./srcs/

HEAD_PATH	= ./includes/

AR			= ar rcs

RM			= rm -f

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

SRCS		= $(addprefix $(SRC_PATH), $(SRC))

SRCS_BONUS	= $(addprefix $(SRC_PATH), $(SRC) $(BONUS))

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
			$(CC) $(CFLAGS) -c -o $@ $< -I${HEAD_PATH}

bonus:		$(OBJS_BONUS)
			make _BONUS=1 all

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
