NAME = libft.a

INCS_DIR = includes/
# SRCS_DIR = srcs/

# SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
#         ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
#         ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
#         ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
#         ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
#         ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
#         ft_tolower.c ft_toupper.c
LIBFT_DIR = srcs
PRINTF_DIR = $(LIBFT_DIR)/ft_printf
DPRINTF_DIR = $(LIBFT_DIR)/ft_dprintf
IS_DIR = $(LIBFT_DIR)/ft_is
MEM_DIR = $(LIBFT_DIR)/ft_mem
PUT_DIR = $(LIBFT_DIR)/ft_put
STDLIB_DIR = $(LIBFT_DIR)/ft_stdlib
STR_DIR = $(LIBFT_DIR)/ft_str
TO_DIR = $(LIBFT_DIR)/ft_to

SRCS = $(IS_DIR)/ft_isalnum.c $(IS_DIR)/ft_isalpha.c $(IS_DIR)/ft_isascii.c \
        $(IS_DIR)/ft_isdigit.c $(IS_DIR)/ft_isprint.c \
        $(MEM_DIR)/ft_memchr.c $(MEM_DIR)/ft_memcmp.c $(MEM_DIR)/ft_memcpy.c \
        $(MEM_DIR)/ft_memmove.c $(MEM_DIR)/ft_memset.c $(PUT_DIR)/ft_putchar_fd.c \
        $(PUT_DIR)/ft_putendl_fd.c $(PUT_DIR)/ft_putnbr_fd.c $(PUT_DIR)/ft_putstr_fd.c \
        $(STDLIB_DIR)/ft_bzero.c $(STDLIB_DIR)/ft_calloc.c $(STDLIB_DIR)/ft_split.c \
        $(STR_DIR)/ft_strchr.c $(STR_DIR)/ft_strdup.c \
        $(STR_DIR)/ft_striteri.c $(STR_DIR)/ft_strjoin.c $(STR_DIR)/ft_strlcat.c \
        $(STR_DIR)/ft_strlcpy.c $(STR_DIR)/ft_strlen.c $(STR_DIR)/ft_strmapi.c \
        $(STR_DIR)/ft_strncmp.c $(STR_DIR)/ft_strnstr.c $(STR_DIR)/ft_strrchr.c \
        $(STR_DIR)/ft_strtrim.c $(STR_DIR)/ft_substr.c \
        $(TO_DIR)/ft_tolower.c $(TO_DIR)/ft_toupper.c \
        $(TO_DIR)/ft_atoi.c $(TO_DIR)/ft_itoa.c \
        $(PRINTF_DIR)/ft_printf.c $(PRINTF_DIR)/ft_putnbr.c $(PRINTF_DIR)/ft_putstr.c \
        $(PRINTF_DIR)/ft_putchar.c $(PRINTF_DIR)/ft_putnbr_base.c $(PRINTF_DIR)/ft_putaddress.c \
        $(PRINTF_DIR)/ft_putnbr_unsigned.c \
        $(DPRINTF_DIR)/ft_dprintf.c $(DPRINTF_DIR)/ft_dputnbr.c $(DPRINTF_DIR)/ft_dputstr.c \
        $(DPRINTF_DIR)/ft_dputchar.c $(DPRINTF_DIR)/ft_dputnbr_base.c $(DPRINTF_DIR)/ft_dputaddress.c \
        $(DPRINTF_DIR)/ft_dputnbr_unsigned.c



OBJ = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCS_DIR) 

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
