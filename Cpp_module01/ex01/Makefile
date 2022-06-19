NAME = brainz

CC = g++

SOURCE = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp \
		zombieHorde.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJECTS = $(SOURCE:.cpp=.o)

HEADER = Zombie.hpp

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	$(CC) $(OBJECTS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all