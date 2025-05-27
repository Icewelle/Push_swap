MAKEFLAGS += --silent
C = cc
CCFLAGS = -Wall -Werror -Wextra -g3 -I./headers
SRCS =	main.c\
		utils.c\
		handle_args.c\
		create_stack.c\
		list_utils.c\
		command.c\
		double_command.c\
		little_sort.c\
		big_sort.c
		
OBJ = $(addprefix $(BIN_DIR)/,$(SRCS:.c=.o))
NAME = push_swap
SRCS_DIR = ./srcs
BIN_DIR = ./bin

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
	$(C) $(CCFLAGS) $(OBJ) -o $(NAME)
	@$(COMP_END)

$(BIN_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(C) $(CCFLAGS) -c $< -o $@

clean :
	rm -rf $(BIN_DIR)
	@$(CLEANED)

fclean : clean
	rm -f $(NAME)
	@$(FCLEANED)

re : fclean all

.PHONY : all clean fclean re