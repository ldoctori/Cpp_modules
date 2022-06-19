NAME = fixed

CC = c++

SOURCE = main.cpp Fixed.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJECTS = $(SOURCE:.cpp=.o)

HEADER = Fixed.hpp

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