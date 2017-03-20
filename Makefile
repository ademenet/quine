.PHONY: all test clean fclean

CC = clang
FLAGS = -Wall -Wextra -Werror

all: colleen grace sully

colleen:
	@$(CC) $(FLAGS) -c Colleen.c
	@$(CC) $(FLAGS) Colleen.o -o Colleen

grace:
	@$(CC) $(FLAGS) -c Grace.c
	@$(CC) $(FLAGS) Grace.o -o Grace

sully:
	@$(CC) $(FLAGS) -c Sully.c
	@$(CC) $(FLAGS) Sully.o -o Sully

clean:
	@rm -rf Colleen.o
	@rm -rf Grace.o
	@rm -rf Sully.o

fclean: clean
	@rm -rf Colleen
	@rm -rf Grace
	@rm -rf Sully

re: fclean all
