NAME		= so_long

SRCS		= so_long.c \
			init/read_map.c \
			init/set_mlx.c \
			init/check_map.c \
			init/check_other_item.c \
			init/put_img.c \
			move/move_position.c \
			gnl/get_next_line.c \
			gnl/get_next_line_utils.c

MLXDIR		= mlx

OBJS		= $(SRCS:.c=.o)

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

MLX			= -L ./mlx -lmlx -framework OpenGL -framework Appkit

FSANITIZE	= -g -fsanitize=address

RM			= rm -f

$(NAME):	$(OBJS)
			make -C $(MLXDIR)
			$(CC) $(CFLAGS) $(FSANITIZE) $(MLX) -g $(OBJS) -o $@

all:		$(NAME)

clean:
			make -C $(MLXDIR) clean
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re