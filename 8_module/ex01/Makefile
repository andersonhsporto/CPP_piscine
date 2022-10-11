NAME	= Span

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
INCLUDE =	-I ./
HEADERS	= Span.hpp

SRC		= main.cpp Span.cpp

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
