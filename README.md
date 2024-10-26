## 📚 Libft

### About
Libft is the first project at 42 school. The goal is to recreate various standard C library functions as well as additional utility functions that will be used throughout the curriculum.

### Included Functions

#### Libc functions:
- `ft_isalpha` - checks if character is alphabetic
- `ft_isdigit` - checks if character is a digit
- `ft_isalnum` - checks if character is alphanumeric
- `ft_isascii` - checks if character is in ASCII table
- `ft_isprint` - checks if character is printable
- `ft_strlen` - calculates string length
- `ft_memset` - fills memory with a constant byte
- `ft_bzero` - zeros a memory area
- `ft_memcpy` - copies memory area
- `ft_memmove` - copies memory area with overlap handling
- `ft_strlcpy` - size-bounded string copying
- `ft_strlcat` - size-bounded string concatenation
- `ft_toupper` - convert char to uppercase
- `ft_tolower` - convert char to lowercase
- `ft_strchr` - locate character in string
- `ft_strrchr` - locate character in string from the end
- `ft_strncmp` - compare two strings
- `ft_memchr` - scan memory for a character
- `ft_memcmp` - compare memory areas
- `ft_strnstr` - locate a substring in a string
- `ft_atoi` - convert string to integer

#### Additional functions:
- `ft_substr` - extract substring from string
- `ft_strjoin` - concatenate two strings
- `ft_strtrim` - trim beginning and end of string
- `ft_split` - split string using a delimiter
- `ft_itoa` - convert integer to string
- `ft_strmapi` - applies function to each character of string
- `ft_striteri` - applies function to each character of string
- `ft_putchar_fd` - output a char to given file descriptor
- `ft_putstr_fd` - output a string to given file descriptor
- `ft_putendl_fd` - output a string to given fd with newline
- `ft_putnbr_fd` - output a number to given fd

### Compilation
```bash
make        # compile the library
make clean  # remove object files
make fclean # remove object files and library
make re     # recompile the library
```

### Usage
```c
#include "libft.h"

int main(void)
{
    char str[] = "42 is amazing";
    ft_putstr_fd(str, 1);
    return (0);
}
```
