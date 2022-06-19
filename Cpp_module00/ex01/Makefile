NAME = phonebook

SOURCES = main.cpp Contact.class.cpp PhoneBook.class.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS = Contact.class.hpp PhoneBook.class.hpp

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADERS)
	$(CC) $(OBJECTS) -o $(NAME)
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all