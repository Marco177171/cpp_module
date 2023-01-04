NAME = SedIsForLosers
SRCS = main.cpp Sed.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

$(NAME):
	c++ $(FLAGS) $(SRCS) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re