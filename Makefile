# Makefile for libft project

# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = $(wildcard *.c)
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
