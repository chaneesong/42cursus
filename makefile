CC = gcc
TARGET = libft.a
OBJS = main.o kor.o usa.o

CFLAGS = -Wall -Werror -Wextra

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -o $@ $^

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	rm -f $(OBJS) $(TARGET)
