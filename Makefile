CC = gcc
CFLAGS = -Wall -Wextra -I. -O2
TARGET = codetuah

SRCS = main.c asm.c
OBJS = main.o asm.o

.PHONY: all clean

all: $(TARGET)

clean: $(TARGET)
	rm -rf $(TARGET) *.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

$(OBJS):
	$(CC) -c -o $(OBJS) $(SRCS)
