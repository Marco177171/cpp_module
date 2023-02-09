NAME = Intern
FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
SRCS = main.cpp Intern.cpp Form.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME):
	g++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: $(NAME) clean fclean all
