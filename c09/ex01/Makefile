
SRC = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS = $(SRC:.c=.o)
HEAD = ./includes/
NAME = libft.a
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
LIB = ranlib
GCC = gcc
RM = rm -f

all: ${NAME}

.c.o: 
		${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${AR} ${NAME} ${OBJS}
		${LIB} ${NAME}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
