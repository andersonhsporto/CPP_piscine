NAME	= convert

CC		= c++
CFLAGS	= -Wall -Wextra -std=c++98 #-Werror 

SRC		= main.cpp ConvertService.cpp Casting.cpp IntegerCasting.cpp \
		  CharCasting.cpp FloatCasting.cpp DoubleCasting.cpp

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
