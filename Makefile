CC = cc
CCFLAGS = -Wall -Werror -Wextra -Iincludes
SRC =	push_swap.c\
		check_error.c\
		commands_a.c\
		commands_b.c\
		commands_both.c
OBJ = $(SRC:.c=.o)
NAME = push_swap
LIBFT = libft

all : $(NAME)

$(NAME) : $(OBJ)
	@make -C $(LIBFT)
	cc $(CCFLAGS) $(OBJ) -o push_swap ./libft/libft.a

clean :
	rm -f $(OBJ)
	@make clean -C $(LIBFT)

fclean : clean
	rm -f $(NAME)
	rm -f $(LIBFT)/libft.a

re : fclean all

.PHONY : all clean fclean re