NAME = phonebook
SRC = main.cpp Contact.class.cpp Contact.class.hpp Phonebook.class.cpp Phonebook.class.hpp

$(NAME):
	g++ $(SRC) -o $(NAME)

clean:
	rm -rf *.o *.gch

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(NAME)
