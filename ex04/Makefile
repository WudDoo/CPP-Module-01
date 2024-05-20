NAME = notsed

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

OBJ_DIR = .obj

SRCS = main.cpp utils.cpp
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

HEADERS = utils.hpp

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "Compiled!"

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS) $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

val: all
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME) test.txt " " "x"

.PHONY: all clean fclean re val