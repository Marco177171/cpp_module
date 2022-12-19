NAME = accounts
SRCS = Account.cpp tests.cpp

$(NAME):
	g++ $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf *.o *.gch

fclean: clean
	rm -rf $(NAME)

re: fclean all

