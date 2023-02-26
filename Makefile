CC = gcc
RM = rm -rf
FLAG = -Wall -Wextra -Werror
############################################################################
################################### Main ###################################
NAME = push_swap
FILES :=	main tools tools2 args_parse stack_tools stack split error \
			sorting_tools sorting_tools2 sortingA sortingB sortingC \
			sortingD algoA algo_tools algo_tools2

SRCS_DIR = ./src/
OBJS_DIR = ./garbage/

############################################################################
################################## Bonus ###################################
BONUS_NAME = checker
BONUS_FILE := 	checker_bonus error_bonus parsing_bonus stacks_bonus tools_bonus tools2_bonus \
				tools3_bonus sorting_tools_bonus sorting_tools2_bonus sortingA_bonus sortingB_bonus \
				sortingC_bonus sortingD_bonus

BONUS_DIR = ./bonus/
BONUS_OBJS_DIR = ./bonus_garbage/

############################################################################
############################################################################
############################################################################
############################# Colors & Prompt ###############################
RED="\033[1;31m";
CYAN="\033[1;36m"
GREEN="\033[1;32m"
ENDCOLOR="\033[0m"
CLEANING := $(GREEN)___ Cleaning Completed ___$(ENDCOLOR)
SUCCESS := $(GREEN)___ [$(NAME)] Successfully Compiled! ___$(ENDCOLOR)
BONUS_SUCCESS := $(GREEN)___ [$(BONUS_NAME)] Bonus Successfully Compiled! ___$(ENDCOLOR)
############################ Compilation Main ###############################
#SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAG) $(OBJS) -o $(NAME)
	@echo $(SUCCESS)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(FLAG) -c $< -o $@
	@echo $(CYAN)[Compiling]: $@$(ENDCOLOR)
########################### Compilation Bonus ###############################
BONUS_OBJS = $(addprefix $(BONUS_OBJS_DIR), $(addsuffix .o, $(BONUS_FILE)))
bonus: $(BONUS_NAME)

$(BONUS_NAME): $(BONUS_OBJS)
	@$(CC) $(FLAG) $(BONUS_OBJS) -o $(BONUS_NAME)
	@echo $(BONUS_SUCCESS)

$(BONUS_OBJS_DIR)%.o: $(BONUS_DIR)%.c
	@mkdir -p $(BONUS_OBJS_DIR)
	@$(CC) $(FLAG) -c $< -o $@
	@echo $(CYAN)[Compiling Bonus]: $@$(ENDCOLOR)

################################# Cleaning ##################################
clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@echo $(CLEANING)

fclean: clean
	@$(RM) $(NAME) $(BONUS_NAME) $(OBJS_DIR) $(BONUS_OBJS_DIR)

re: fclean all

################################## Phony ####################################
.PHONY: all clean fclean re bonus
