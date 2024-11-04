# Makefile for libft project

# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
TEST_DIR = tests
TEST_SRC = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJS = $(TEST_SRC:.c=.o)
TEST_EXEC = run_tests

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

# Rule to build the test executable
$(TEST_EXEC): $(NAME) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST_EXEC) $(TEST_OBJS) $(NAME)


# Rule to run tests
test: $(TEST_EXEC)
	./$(TEST_EXEC)

# Clean rule to remove compiled files
clean:
	rm -f $(OBJS) $(TEST_OBJS) $(TEST_EXEC)

# Full clean rule to remove all generated files
fclean: clean
	rm -f $(NAME)

# Rebuild rule to clean and then build
re: fclean all

# Phony targets
.PHONY: all clean fclean re test
