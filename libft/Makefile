NAME = libft.a

SOURCES = \
	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_putchar_fd.c\
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_split.c ft_strmapi.c ft_striteri.c ft_itoa.c\
	get_next_line.c get_next_line_utils.c ft_printf/ft_printf.c\
	ft_printf/ft_nosign_num.c ft_printf/ft_putchar.c ft_printf/ft_punthex.c\
	ft_printf/ft_puthex_mayus.c ft_printf/ft_puthex_minus.c ft_printf/ft_putnbr.c\
	ft_printf/ft_putstr.c

BSOURCES = \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

DEPS = $(SOURCES:.c=.d)

INCLUDES = libft.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror -MMD

all: $(NAME)
	make -C ft_printf/

$(NAME): $(OBJECTS) Makefile
	$(AR) -rcs $@ $(OBJECTS)

bonus: $(OBJECTS) $(BOBJECTS)
	$(AR) -r $(NAME) $?

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -I ./ -c $< -o $@

clean:
	make clean -C ft_printf/
	rm -f *.o $(BOBJECTS) *.d

fclean: clean
	make clean -C ft_printf/
	rm -f *.o *.d $(NAME) libft.h.gch

re: fclean all

-include $(DEPS)

.PHONY: all bonus clean fclean re
