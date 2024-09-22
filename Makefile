CC = gcc
CFLAGS = -Wall -Wextra -O2

SRC_DIR = src
BUILD_DIR = build
TARGET = codetuah

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

.PHONY: all clean

all: $(TARGET)

clean:
	rm -rf $(TARGET) $(BUILD_DIR)

$(TARGET): $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(SRC_DIR) -c -o $@ $<
