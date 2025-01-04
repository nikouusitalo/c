CC=gcc

# Compiler flags
CFLAGS=-g -Wall -Wextra -std=c17

# Output binary
BIN=main

# Default target
all: $(BIN)

# Build the binary
$(BIN): main.o
	$(CC) $(CFLAGS) main.o -o $(BIN)

# Compile main.c into main.o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	$(RM) -r $(BIN) *.o
