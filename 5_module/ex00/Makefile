NAME	= Bureaucrat

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp Bureaucrat.cpp

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
