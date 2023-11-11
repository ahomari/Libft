SRC = $(wildcard *.c)
SRCB = $(wildcard *_bonus.c)
OBJS = ${SRC:.c=.o}
OBJSB = ${SRCB:.c=.o}
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
NAME = libft.a

%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS} 
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

bonus: ${OBJSB}
	${LIBC} ${NAME} ${OBJSB}

clean:
	${RM} *.o

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: fclean all re  clean