NAME = MoarBrainz
SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = *.o

$(NAME):
	c++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean: rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

