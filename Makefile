CC = gcc 
CFLAGS = -Wall -Wextra -Werror

# Collection of source files
SRC = ft_isalpha.c

# List of generated object files
OBJ = ft_isalpha.o

# Name of the compiled software
NAME = libft.a

#command to compile and run the code
all: $(NAME)

# Compile target with optimizations
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -O -o $(NAME)

# Compile .c to .o
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean 
	 rm -f $(NAME)

re: fclean all

