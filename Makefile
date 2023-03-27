##
## EPITECH PROJECT, 2022
## makefile
## File description:
## Makefile
##

SRC 	= main.c\

CFLAGS = -W -Wall -Werror -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	hidenp

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(SRC) -o $(NAME) $(CFLAGS)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
