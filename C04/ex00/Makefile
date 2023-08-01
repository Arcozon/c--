D_SRC = ./src/
S_SRC = Animal.cpp  Cat.cpp  Dog.cpp  main.cpp
SRC = $(addprefix $(D_SRC), $(S_SRC))

D_OBJ = ./obj/
OBJ = $(addprefix $(D_OBJ), $(S_SRC:.cpp=.o))

D_INC = ./inc/

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Animal

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $^ -o$@

$(OBJ): $(D_OBJ)%.o : $(D_SRC)%.cpp
	@mkdir -p $(D_OBJ)
	$(CPP) $(FLAGS) -I$(D_INC) -c $< -o $@

clean:
	rm -rf $(D_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean flcean re
