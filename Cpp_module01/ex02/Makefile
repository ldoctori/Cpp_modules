NAME = brainz

CC = g++

SOURCE = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJECTS = $(SOURCE:.cpp=.o)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all