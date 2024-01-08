NAME = libftprintf.a
SOURCES = \
		ft_nosign_num.c ft_punthex.c ft_putchar.c ft_puthex_mayus.c ft_puthex_minus.c \
		ft_putnbr.c ft_putstr.c ft_printf.c

OBJECTS = $(SOURCES:.c=.o)

INCLUDES = ft_printf.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror -MMD
DEPS = $(SOURCES:.c=.d)

$(NAME): $(OBJECTS)
	ar rcs $@ $?

all: $(NAME)

%.o: %.c Makefile
	$(CC) $(CFLAGS) -I ./ -c $< -o $@

clean:
	rm -f $(OBJECTS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
