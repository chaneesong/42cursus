NAME		= minitalk
CDIR		= ./client
SDIR		= ./server

all:		$(NAME)

$(NAME):
			@$(MAKE) -C $(CDIR) all
			@$(MAKE) -C $(SDIR) all

server:
			@$(MAKE) -C $(SDIR) all

client:
			@$(MAKE) -C $(CDIR) all

clean:
			@$(MAKE) -C $(CDIR) clean
			@$(MAKE) -C $(SDIR) clean

fclean:		
			@$(MAKE) -C $(CDIR) fclean
			@$(MAKE) -C $(SDIR) fclean

re:			fclean all

.PHONY:		all client server clean fclean re