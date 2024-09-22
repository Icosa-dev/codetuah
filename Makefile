CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = codetuah

SRCS = main.c
OBJS = main.o

.PHONY: all clean

all: $(TARGET)

clean: $(TARGET)
	rm -rf $(TARGET) *.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

$(OBJS):
	$(CC) -c -o $(OBJS) $(SRCS)
