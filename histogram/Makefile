CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: histogram

histogram: histogram.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f histogram

.PHONY: all clean