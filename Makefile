NAME = push_swap

SRCS = src/instructions.c src/main.c src/radix.c src/rotate.c src/rrotate.c \
		src/simple_sort.c src/sorts.c src/swap.c utils/check_args.c \
		utils/index.c utils/utils.c

OBJS = ${SRCS.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${MAKE} -C ./libft
	${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

clean:
	@${MAKE} -C ./libft fclean
	@${RM} ${NAME}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re