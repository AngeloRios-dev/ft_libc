CC = gcc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c \
	ft_isdigit
OBJ = ft_isalpha.o \
	ft_isdigit.o
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean 
	 rm -f $(NAME)

re: fclean all

