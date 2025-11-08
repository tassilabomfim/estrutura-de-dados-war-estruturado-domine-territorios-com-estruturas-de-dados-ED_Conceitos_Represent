CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -O2

SRC = src/war.c
BIN = bin/territorios

.PHONY: all build run clean

all: run

build:
	@mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(BIN)

run: build
	./$(BIN)

clean:
	rm -f $(BIN)
co