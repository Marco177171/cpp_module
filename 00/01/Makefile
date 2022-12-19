NAME = phonebook
SRC = main.cpp Contact.class.cpp Phonebook.class.cpp

$(NAME):
	g++ $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf *.o *.gch

fclean: clean
	rm -rf $(NAME)

re: fclean all
