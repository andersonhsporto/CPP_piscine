NAME	= Polymorphism

CC		= c++
CFLAGS	= -Wall -Wextra -std=c++98 #-Wshadow -Werror

SRC		= main.cpp Animal.cpp Dog.cpp Cat.cpp

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
