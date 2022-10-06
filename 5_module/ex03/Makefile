NAME	= Intern

CC		= c++
CFLAGS	= -Wall -Wextra -std=c++98 #-Werror 

SRC		= main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp \
	      RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
