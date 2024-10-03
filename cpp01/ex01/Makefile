
MUTE = @
NAME = brains
CC = c++
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>#
#----------------------------------COMPILE-------------------------------------#
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<#
SRC := main.cpp Zombie.cpp zombieHorde.cpp
OBJ := $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

all: $(NAME)

$(NAME): $(OBJ)
	$(MUTE)$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(MUTE)$(CC) $(FLAGS) -c $< -o $@
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>#
#----------------------------------CLEANUP-------------------------------------#
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<#
clean:
	$(MUTE)rm -f $(OBJ)
fclean: clean
	$(MUTE)rm -f $(NAME)
re: fclean all
rerun: fclean run
.PHONY: all clean fclean re rerun
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>#
#-------------------------------------RUN--------------------------------------#
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<#
run: all
	./$(NAME)
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>#
#-------------------------------------HELP-------------------------------------#
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<#
help man:
	$(MUTE)echo "$(BOLD)$(GREEN)----------------------------------------------$(RESET)"
	$(MUTE)echo "$(BOLD)$(YELLOW)              Welcome to $(PURPLE)$(BOLD)$(NAME)                       $(RESET)"
	$(MUTE)echo "$(BOLD)$(GREEN)----------------------------------------------$(RESET)"
	$(MUTE)echo ""
	$(MUTE)echo "$(BOLD)$(CYAN) Available Options:$(RESET)"
	$(MUTE)echo ""
	$(MUTE)echo "$(BOLD)  make (all)$(RESET)    - Compile the main program and dependencies"
	$(MUTE)echo "$(BOLD)  make run$(RESET)      - Compiles and runs the ./minishel program"
	$(MUTE)echo "$(BOLD)  make help$(RESET)     - Display this help message"
	$(MUTE)echo "$(BOLD)  make rerun$(RESET)    - Cleans then recompiles and runs everything"
	$(MUTE)echo "$(BOLD)  make clean$(RESET)    - Remove compiled object files"
	$(MUTE)echo "$(BOLD)  make fclean$(RESET)   - Remove compiled files and executable"
	$(MUTE)echo "$(BOLD)  make rclean$(RESET)   - Remove the local readline library"
	$(MUTE)echo "$(BOLD)  make re$(RESET)       - Remove all compiled files and recompile"
	$(MUTE)echo ""
	$(MUTE)echo "$(BOLD)$(GREEN)----------------------------------------------$(RESET)"

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>#
#----------------------------------COLOR CODES---------------------------------#
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<#
# Colors
BLACK		=\033[30m
RED			=\033[31m
GREEN       =\033[32m
YELLOW      =\033[33m
BLUE        =\033[34m
PURPLE      =\033[35m
CYAN        =\033[36m
WHITE       =\033[37m
# Text
ERASE       =\033[2K
RESET       =\033[0m
BOLD        =\033[1m
FAINT       =\033[2m
ITALIC      =\033[3m
UNDERLINE   =\033[4m
INVERT      =\033[7m
STRIKE      =\033[9m
# Background
BG_BLACK    =\033[40m
BG_RED      =\033[41m
BG_GREEN    =\033[42m
BG_YELLOW   =\033[43m
BG_BLUE     =\033[44m
BG_PURPLE   =\033[45m
BG_CYAN     =\033[46m
BG_WHITE    =\033[47m
# Others
UP    ="\033[A" # cursor up
CUT   ="\033[K" # cut line
#==============================================================================#
