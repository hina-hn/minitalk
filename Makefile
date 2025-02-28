CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_SERVER = server.c
SRCS_CLIENT = client.c
OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
NAME_SERVER = server
NAME_CLIENT = client
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME_SERVER) $(NAME_CLIENT)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME_SERVER): $(OBJS_SERVER) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJS_SERVER) -L$(LIBFT_DIR) -lft

$(NAME_CLIENT): $(OBJS_CLIENT) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJS_CLIENT) -L$(LIBFT_DIR) -lft

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all
