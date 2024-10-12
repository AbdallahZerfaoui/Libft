# Name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB_FLAGS = -I. -L. -lft

# List of test files
TEST_CFILE = main.c
EXEC_FILE = test_libft.exe

# List of source files
SRC = $(wildcard ft_*.c)
BONUS_SRC = $(wildcard ft_lst*.c)

# Object files (by replacing .c with .o)
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Default target
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ)
	@$(AR) rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created."

# Rule to compile .c files into .o files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< into $@."

# New version of make that will create the library and delete the object files
# after the library is created
lib_only: $(OBJ)
	@$(AR) rcs $(NAME) $(OBJ)
	@rm -f $(OBJ)
	@echo "Library $(NAME) created and Object files cleaned."

# Bonus rule to compile bonus files
bonus: $(OBJ) $(BONUS_OBJ)
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@rm -f $(OBJ) $(BONUS_OBJ)
	@echo "Bonus functions added to $(NAME)."

# Clean the object files
clean:
	@rm -f $(OBJ) $(BONUS_OBJ)
	@echo "Object files cleaned."

# Clean everything including the library
fclean: clean
	@rm -f $(NAME)
	@rm -f *.exe *.out
	@echo "Library $(NAME) removed."

# Recompile everything
re: fclean all

# lib_only then execute this command : clear && gcc test_libft.c -I. -L. -lft -o test_libft && ./test_libft
test: 
	@rm -f $(EXEC_FILE)
	@clear && $(CC) $(CFLAGS) $(TEST_CFILE) $(LIB_FLAGS) -o $(EXEC_FILE) && ./$(EXEC_FILE)

full_test: lib_only test

.PHONY: all lib_only bonus clean fclean re test full_test
