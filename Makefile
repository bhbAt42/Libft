NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \ 
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c \
		ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c  ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
LIBC = ar rcs 
CC = gcc
FLAGS = -Werror -Wall -Wextra
RM = rm -f 
OBJET = $(SRCS:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)
$(NAME) : $(OBJET)
	@$(LIBC) $(NAME) $(OBJET)
all : $(NAME)
clean : 
	@$(RM) $(OBJET)	
fclean : clean 
	@$(RM) $(NAME)
re : fclean all
.PHONY: all clean fclean re