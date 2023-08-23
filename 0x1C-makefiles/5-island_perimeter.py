CC = gcc
SRC = school.c main.c
OBJ = $(subst .c,.o, $(SRC))
NAME = school
RM = rm
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) -f $(NAME) *~

oclean:
	$(RM) -f $(OBJ)

fclean: clean oclean

re: oclean all
