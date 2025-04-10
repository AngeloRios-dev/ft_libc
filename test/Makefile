CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = ../libft.a
HEADER = ../libft.h
TESTS = test_ft_isalpha.c
NAME = test_runner.out

all: $(NAME)

$(NAME): $(TESTS)
	$(CC) $(CFLAGS) $(TESTS) $(LIB) -I.. -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all