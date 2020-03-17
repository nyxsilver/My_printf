NAME=	a.out

SRCS=	./srcs/main.c \
	./srcs/my_strlen.c \
	./srcs/my_putstr.c \
	./srcs/my_putchar.c \
	./srcs/my_putnbr.c \
	./srcs/my_printf.c \
	./srcs/my_putnbr_base.c

RM=	rm -rf

HDR=	include/

FLAGS= -Wall -Wextra -Werror -std=c11

OBJS= $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	gcc $(FLAGS) -I $(HDR) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all\
	clean\
	fclean\
	re