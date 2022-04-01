NAME		= so_long

SRCS		= so_long.c \
			init/read_map.c \
			init/set_mlx.c \
			init/check_map.c \
			init/put_img.c \
			move/move_position.c \
			gnl/get_next_line.c \
			gnl/get_next_line_utils.c

OBJS		= $(SRCS:.c=.o)

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

MLX			= -L ./mlx -lmlx -framework OpenGL -framework Appkit

FSANITIZE	= -g -fsanitize=address

RM			= rm -f

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(FSANITIZE) $(MLX) -g $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re