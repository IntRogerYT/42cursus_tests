# Variables
LIBFT_DIR = ../../libft
LIBFT = $(LIBFT_DIR)/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = run
NAME_BONUS = run_bonus
SRC = main.c
SRC_BONUS = main_bonus.c

# Regla principal: compila libft i genera run
all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(SRC) $(LIBFT)
	$(CC) $(CFLAGS) $(SRC) $(LIBFT) -o $(NAME)

# Regla per bonus: compila libft bonus i genera run_bonus
bonus: $(LIBFT_BONUS) $(NAME_BONUS)

$(LIBFT_BONUS):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME_BONUS): $(SRC_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_BONUS) $(LIBFT) -o $(NAME_BONUS)

# Regles de neteja
clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -f *.o

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all bonus clean fclean re
