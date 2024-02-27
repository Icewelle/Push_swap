CC = cc
CCFLAGS = -Wall -Werror -Wextra -Iincludes
SRC =	push_swap.c\
		check_error.c
OBJ = $(SRC:.c=.o)
NAME = push_swap.a
LIBFT = libft

all : $(NAME)

$(NAME) : $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	ar rcs  $@ $^

clean :
	rm -f $(OBJ)
	@make clean -C $(LIBFT)

fclean : clean
	rm -f $(NAME)
	rm -f $(LIBFT)/libft.a

re : fclean all

.PHONY : all clean fclean re