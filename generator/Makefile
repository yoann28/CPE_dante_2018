##
## EPITECH PROJECT, 2019
## make
## File description:
## make
##

SRC =		src/imperfect.c\
		src/check_all.c\
		src/main.c

OBJ =		$(SRC:.c=.o)

INC =		-I ./include

CFLAGS =	$(INC) -W

NAME =		generator

CC =		gcc

all :		$(NAME)

$(NAME) :	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean :
		rm -f $(OBJ)

fclean :	clean
		rm -f $(NAME)

re :		fclean all
