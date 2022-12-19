NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Contact.class.cpp Phonebook.class.cpp

$(NAME):
	g++ $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf *.o *.gch

fclean: clean
	rm -rf $(NAME)

re: fclean all
