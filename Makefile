NAME = libft.a
SRCS = ft_atoi.c ft_b..... \ 
			ft_...
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