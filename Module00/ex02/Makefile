NAME = accounts
FLAGS = -Wall -Wextra -Werror -std=c++11
SRCS = Account.cpp tests.cpp

$(NAME):
	g++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf *.o *.gch

fclean: clean
	rm -rf $(NAME)

re: fclean all

