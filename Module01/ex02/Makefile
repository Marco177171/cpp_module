NAME = HiThisIsBrain
SRCS = main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = *.o

$(NAME):
	g++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
