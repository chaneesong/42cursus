SRC			= ft_lstclear.c ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strlcat.c ft_strlcpy.c ft_strtrim.c ft_strchr.c ft_memset.c ft_strjoin.c ft_substr.c ft_calloc.c ft_strdup.c ft_isspace.c ft_isprint.c ft_isdigit.c ft_strrchr.c ft_isalpha.c ft_islower.c ft_isupper.c ft_strlen.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_bzero.c

SRCS		= ${addprefix ${PRE}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

PRE			= ./srcs/

HEAD		= ./includes/

NAME		= libft.a

AR			= ar rc

RM			= rm -f

LIB			= ranlib

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
