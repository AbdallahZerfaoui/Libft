# Name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB_FLAGS = -I./includes -L. -lft

# List of test files
TEST_CFILE = test_libft.c
EXEC_FILE = test_libft

# List of source files
SRC = $(wildcard ./src/*.c)

# Object files (by replacing .c with .o)
OBJ = $(SRC:.c=.o)

# Default target
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created."

# Rule to compile .c files into .o files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< into $@."

# New version of make that will create the library and delete the object files
# after the library is created
lib_only: $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@rm -f $(OBJ)
	@echo "Library $(NAME) created and Object files cleaned."

# Clean the object files
clean:
	@rm -f $(OBJ)
	@echo "Object files cleaned."

# Clean everything including the library
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Recompile everything
re: fclean all

# lib_only then execute this command : clear && gcc test_libft.c -I. -L. -lft -o test_libft && ./test_libft
test: 
	@rm -f $(EXEC_FILE)
	@clear && $(CC) $(CFLAGS) $(TEST_CFILE) $(LIB_FLAGS) -o $(EXEC_FILE) && ./$(EXEC_FILE)

full_test: lib_only test

.PHONY: all lib_only clean fclean re test full_test
