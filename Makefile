# Makefile for libft project

# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c
OBJS = $(SRC:.c=.o)

# Detect OS and adjust compiler
UNAME := $(shell uname)

ifeq ($(UNAME), Darwin)  # macOS
    CC = clang
endif

# Rule to build the target library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to build object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to build test object files
$(TEST_DIR)/%.o: $(TEST_DIR)/%.c
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
