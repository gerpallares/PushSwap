NAME := push_swap

SOURCE := src/instructions.c src/main.c src/radix.c src/rotate.c src/rrotate.c \
	src/simple_sort.c src/sorts.c src/swap.c utils/check_args.c utils/index.c \
	utils/utils.c utils/ft_lstadd_back.c utils/ft_lstadd_front.c \
	utils/ft_lstlast.c utils/ft_lstnew.c utils/ft_lstsize.c

OBJS := $(SOURCE:.c=.o)
DEPS := $(SOURCE:.c=.d)

CC := gcc

CFLAGS := -Wall -Wextra -Werror -MMD -g

LIBFT := ./libft/
LLIBFT := ./libft/libft.a
INCLUDES := includes/push_swap.h

LIBFT_SRC := $(LIBFT)ft_atoi.c $(LIBFT)ft_bzero.c $(LIBFT)ft_isalnum.c $(LIBFT)ft_isalpha.c \
		$(LIBFT)ft_isascii.c $(LIBFT)ft_isdigit.c $(LIBFT)ft_isprint.c $(LIBFT)ft_itoa.c \
		$(LIBFT)ft_memchr.c $(LIBFT)ft_memcmp.c $(LIBFT)ft_memcpy.c $(LIBFT)ft_memmove.c \
		$(LIBFT)ft_memset.c $(LIBFT)ft_putchar_fd.c $(LIBFT)ft_putendl_fd.c $(LIBFT)ft_putnbr_fd.c \
		$(LIBFT)ft_putstr_fd.c $(LIBFT)ft_split.c $(LIBFT)ft_strchr.c $(LIBFT)ft_strdup.c \
		$(LIBFT)ft_striteri.c $(LIBFT)ft_strjoin.c $(LIBFT)ft_strlcat.c $(LIBFT)ft_strlcpy.c \
		$(LIBFT)ft_strmapi.c $(LIBFT)ft_strncmp.c $(LIBFT)ft_strnstr.c $(LIBFT)ft_strrchr.c \
		$(LIBFT)ft_strtrim.c $(LIBFT)ft_substr.c $(LIBFT)ft_tolower.c $(LIBFT)ft_toupper.c \
		$(LIBFT)ft_printf/ft_nosign_num.c $(LIBFT)ft_printf/ft_printf.c $(LIBFT)ft_printf/ft_punthex.c \
		$(LIBFT)ft_printf/ft_putchar.c $(LIBFT)ft_printf/ft_puthex_mayus.c $(LIBFT)ft_printf/ft_puthex_minus.c \
		$(LIBFT)ft_printf/ft_putnbr.c $(LIBFT)ft_printf/ft_putstr.c $(LIBFT)get_next_line.c \
		$(LIBFT)get_next_line_utils.c


LIBFT_OBJS := $(LIBFT_SRC:.c=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJS) Makefile $(INCLUDES) $(LIBFT_OBJS)
	make -C $(LIBFT) > /dev/null
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
