srcs = main.c utils.c

objs = ${srcs:.c=.o}

name = do-op

flags = -Wall -Wextra -Werror

.PHONY : all clean fclean

all : ${name}

${objs} : %.o : %.c
	cc ${flags} -c $< -o $@

${name} : ${objs}
	cc ${flags} ${objs} -o $@

clean : 
	rm -f ${objs}

fclean : clean
	rm -f ${name}
