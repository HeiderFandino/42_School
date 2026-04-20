CC = cc
CFLAGS = -Wall -Wextra -Werror
ARS = ar -rcs
SRC = ./src
SRCS = $(wildcard $(SRC)/*.c)
OBJS = $(SRCS:%.c=%.o)
TARGET = libft.a

all: $(TARGET)

$(TARGET): $(OBJS)
	$(ARS) $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I ./includes -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
