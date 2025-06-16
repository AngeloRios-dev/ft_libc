# Libft
## 🧠 Description
**Libft** is a C library developed as part of the 42 curriculum. Its purpose is to recreate a set of standard libc functions, along with some additional utilities for string manipulation, memory handling, and low-level output. This library will serve as a reusable foundation for many subsequent projects in the program.

---

## 📁 Repository Structure

├── ft_*.c       # Function implementations  
├── libft.h      # Header file  
├── Makefile     # Compilation rules for the static library libft.a  
├── libft.a      # Generated static library  


---

## ✅ Implemented Functions

### Part 1 – Standard libc Functions

Reimplemented with the ft_ prefix, including:
- Characters: isalpha, isdigit, isalnum, isascii, isprint, toupper, tolower
- Strings: strlen, strchr, strrchr, strncmp, strnstr
- Memory: memset, bzero, memcpy, memmove, memchr, memcmp
- Conversion: atoi
- Dynamic allocation: calloc, strdup
- Safe concatenation: strlcpy, strlcat

---

### Part 2 – Additional Functions

- ft_substr – Extract substrings
- ft_strjoin – Concatenate strings
- ft_strtrim – Trim characters from a string
- ft_split – Split a string by a delimiter
- ft_itoa – Convert integers to strings
- ft_strmapi – Apply a function to each character of a string (returns new string)
- ft_striteri – Apply a function in-place to each character of a string
- ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd – Output functions using file descriptors
---

## 🛠️ Compilación

make            # Compiles the library and generates libft.a  
make clean      # Deletes object files  
make fclean     # Deletes object files and libft.a  
make re         # Cleans and recompiles  