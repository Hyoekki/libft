CC = cc
CFLAGS = -Wall -Werror -Wextra -O2
NAME = libft.a
SRC = src/ft_atoi.c \
	src/ft_atol.c \
	src/ft_bzero.c \
	src/ft_calloc.c \
	src/ft_isalnum.c \
	src/ft_isalpha.c \
	src/ft_isascii.c \
	src/ft_isdigit.c \
	src/ft_isprint.c \
	src/ft_isspace.c \
	src/ft_itoa.c \
	src/ft_memchr.c \
	src/ft_memcmp.c \
	src/ft_memcpy.c \
	src/ft_memmove.c \
	src/ft_memset.c \
	src/ft_printf.c \
	src/ft_putchar_fd.c \
	src/ft_putendl_fd.c \
	src/ft_putnbr_fd.c \
	src/ft_putstr_fd.c \
	src/ft_split.c \
	src/ft_strchr.c \
	src/ft_strdup.c \
	src/ft_striteri.c \
	src/ft_strjoin.c \
	src/ft_strlcat.c \
	src/ft_strlcpy.c \
	src/ft_strlen.c \
	src/ft_strmapi.c \
	src/ft_strncmp.c \
	src/ft_strnstr.c \
	src/ft_strrchr.c \
	src/ft_strtrim.c \
	src/ft_tolower.c \
	src/ft_toupper.c \
	src/free_array_of_strings.c \
	src/get_next_line.c \
	src/handle_c.c \
	src/handle_capital_hex.c \
	src/handle_d.c \
	src/handle_p.c \
	src/handle_percent.c \
	src/handle_s.c \
	src/handle_u.c \
	src/handle_x.c

OBJS = $(SRC:.c=.o)

# Rule to build the target library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to build object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# All rule to build the entire project
all: $(NAME)

# Clean rule to remove compiled files
clean:
	rm -f $(OBJS)

# Full clean rule to remove all generated files
fclean: clean
	rm -f $(NAME)

# Rebuild rule to clean and then build
re: fclean all

# Phony targets
.PHONY: all clean fclean re
