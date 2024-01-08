NAME = zombie

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

OBJ_DIR = .obj

SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

HEADER = Zombie.hpp

all: $(NAME)

$(NAME): $(HEADER) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Compiled!"

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS) $(OBJ_DIR)
	@echo "Object files removed"

fclean: clean
	@rm -rf $(NAME)
	@echo "Executable removed"

re: fclean all

.PHONY: all clean fclean re