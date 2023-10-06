# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

# Source files
SRCS = $(wildcard *.c)

# Output binary
TARGET = hsh

# Default target
all: $(TARGET)

# Compile rule
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $@


# Clean rule
clean: rm -f $(TARGET)
   
