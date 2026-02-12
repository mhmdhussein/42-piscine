src = ./srcs

srcs = ${addprefix ${src}, main.c file1.c file2.c file3.c file4.c file5.c}

objs = ${srcs:.c=.o}

head = ./includes/

name = bsq

flags = -Wall -Wextra -Werror

all : ${name}

${objs} : %.o : %.c
        cc ${flags} -c -I ${head} $< -o $@

${name} : ${objs}
        cc ${flags} ${objs} -0 $@

clean :
        rm -f ${objs}

fclean : clean
        rm -f ${name}

.PHONY : all clean fclean
