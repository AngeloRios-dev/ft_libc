CC = gcc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean 
	 rm -f $(NAME)

re: fclean all

