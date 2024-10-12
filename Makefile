# Name of the library
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# List of source files
SRC = ft_atoi.c ft_bzero.c ft_calloc.c \
      ft_isalnum.c ft_isalpha.c ft_isascii.c \
      ft_isdigit.c ft_isprint.c ft_itoa.c \
      ft_memchr.c ft_memcmp.c ft_memcpy.c \
      ft_memmove.c ft_memset.c ft_putchar_fd.c \
      ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
      ft_split.c ft_strchr.c ft_strdup.c \
      ft_striteri.c ft_strjoin.c ft_strlcat.c \
      ft_strlcpy.c ft_strlen.c ft_strmapi.c \
      ft_strncmp.c ft_strnstr.c ft_strrchr.c \
      ft_strtrim.c ft_substr.c ft_tolower.c \
      ft_toupper.c

BONUS_SRC = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
            ft_lstclear_bonus.c ft_lstdelone_bonus.c \
            ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
            ft_lstnew_bonus.c ft_lstsize_bonus.c


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

# Bonus rule to compile bonus files
bonus: $(OBJ) $(BONUS_OBJ)
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo "Bonus functions added to $(NAME)."

# Clean the object files
clean:
	@rm -f $(OBJ) $(BONUS_OBJ)
	@echo "Object files cleaned."

# Clean everything including the library
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Recompile everything
re: fclean all


.PHONY: all bonus clean fclean re
