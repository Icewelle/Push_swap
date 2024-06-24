
MAKEFLAGS += --silent

CFLAGS = -Wall -Werror -Wextra -I ./include/
SRC =	src/cost.c\
		src/initialization.c\
		src/check_arg_utils.c\
		src/check_arg.c\
		src/justdoit.c\
		src/utils.c\
		src/main.c\
		src/position.c\
		src/push.c\
		src/reverse_rotate.c\
		src/rotate.c\
		src/sort_tiny.c\
		src/sort.c\
		src/stack.c\
		src/swap.c
OBJ = $(SRC:.c=.o)
NAME = push_swap

# ------------------------------ Colors ------------------------------

BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_YELLOW	=	\033[1;33m
NO_COLOR	=	\033[0m

# ------------------------------ Messages ------------------------------

COMP_START	=	echo "\n🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Starting the compilation...\n"
COMP_END	=	echo "\n🏗️ $(BOLD_YELLOW)Make: $(NO_COLOR)Compilation done\n"
CLEANED		=	echo "\n💧 $(BOLD_YELLOW)Clean: $(NO_COLOR)Removed all the \".o\" files \n"
FCLEANED	=	echo "\n🧼 $(BOLD_YELLOW)Fclean: $(NO_COLOR)Removed the executables \n"

all : $(NAME)

$(NAME) : $(OBJ)
	@$(COMP_START)
	cc $(CFLAGS) $(OBJ) -o push_swap
	@$(COMP_END)

clean :
	rm -f $(OBJ)
	@$(CLEANED)

fclean : clean
	rm -f $(NAME)
	@$(FCLEANED)

re : fclean all

.PHONY : all clean fclean re