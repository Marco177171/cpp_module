NAME = PmergeMe
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Deque.cpp Vector.cpp
OBJS = $(SRCS.cpp=.o)

$(NAME):
	g++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: $(NAME) clean fclean all