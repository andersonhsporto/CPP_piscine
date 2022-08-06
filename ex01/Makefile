NAME	= PPhonebook

CC		= g++
CFLAGS	= -std=c++98 -Wall -Wextra #-Werror

SRC		= PhoneBookApplication.cpp PhoneBook.cpp Contact.cpp

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $(<:%.cpp=%.o)

OBJ		= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
