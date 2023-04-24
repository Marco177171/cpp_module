NAME = RPN
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp RPN.cpp
OBJS = $(SRCS.cpp=.o)

$(NAME):
	g++ $(FLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: $(NAME) clean fclean all