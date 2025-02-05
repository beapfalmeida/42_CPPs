FLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
NAME = megaphone
SRC = megaphone.cpp
all: $(NAME)

NAME: $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all