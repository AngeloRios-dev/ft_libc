CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = ../libft.a
HEADER = ../libft.h
TESTS = test_ft_isalpha.c \
	test_ft_isdigit.c \
	test_ft_isalnum.c \
	test_ft_isascii.c \
	test_ft_isprint.c
MAIN = main.c
NAME = test_runner.out

all: $(NAME)

$(NAME): $(MAIN) $(TESTS)
	$(CC) $(CFLAGS) $(MAIN) $(TESTS) $(LIB) -I.. -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all