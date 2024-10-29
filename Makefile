# Makefile for libft project

# Variables
# CC = gcc: This sets the compiler to gcc.
CC = gcc

# CFLAGS = -Wall -Werror -Wextra: This sets flags for the compiler.
CFLAGS = -Wall -Werror -Wetra

# TARGET = libft: This sets the name of the executable file that will be created.
TARGET = libft

# SRC = $(wildcard *.c): This sets the source files to all files that end in .c
SRC = $(wildcard *.c)

#OBJS = $(SRCS:.c=.o): This sets the object files to all files that end in .o
OBJS = $(SRCS:.c=.o)

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to build object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove compiled files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: clean
