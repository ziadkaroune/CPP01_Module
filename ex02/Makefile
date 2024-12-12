NAME	=	Zombie
CPP		=	C++	-g
SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
FLAGS	= 	-Werror -Wall -Wextra -std=c++98
RM		=	rm -f

all	:	$(NAME)
$(NAME)	:	$(OBJ)
			$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		@$(RM) $(OBJ)
		@echo "Object files are removed"

fclean :	clean
			@$(RM) $(NAME)
			@echo "done"
re :	fclean  all