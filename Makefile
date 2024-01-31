NAME := push_swap

SOURCE := src/main.c src/moves.c src/moves2.c src/ft_atol.c src/small_sort.c \
	src/big_sort.c src/check_error.c src/list_utils1.c src/list_utils2.c

OBJS := $(SOURCE:.c=.o)
DEPS := $(SOURCE:.c=.d)

CC := gcc

CFLAGS := -Wall -Wextra -Werror -MMD -g

LIBFT := ./libft/
LLIBFT := ./libft/libft.a
INCLUDES := includes/push_swap.h

.SILENT:

all: 
	make -C $(LIBFT)
	make $(NAME)

$(NAME): $(OBJS) Makefile $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJS) -L $(LIBFT) -lft -o $(NAME)
	@echo "\033[0;32m [OK] \033[0m	\033[0;33m All Compiled\033[0m"

%.o: %.c $(INCLUDES)
	$(CC) -c $(CFLAGS) $< -o $@
	@echo "\033[0;32m [OK] \033[0m	\033[0;33m Compiled\033[0m"

clean: 
	rm -f $(OBJS) $(DEPS)
	make clean -C $(LIBFT)
	@echo "\033[0;32m [OK] \033[0m	\033[0;33m All Clean\033[0m"

fclean:
	rm -f $(OBJS) $(DEPS)
	make fclean -C $(LIBFT)
	rm -f $(NAME)
	@echo "\033[0;32m [OK] \033[0m	\033[0;33m All Extremely Clean\033[0m"

re: fclean all

-include $(DEPS)

.PHONY: all make re clean fclean
