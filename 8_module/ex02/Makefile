NAME	= Mutated

CC		= c++
CFLAGS	= -Wall -Wextra  -std=c++98 #-Werror
INCLUDE =	-I ./
HEADERS	= MutantStack.hpp

SRC		= main.cpp MutantStack.cpp

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:%.cpp=%.o)

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
