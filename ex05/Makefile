NAME = harl

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

OBJ_DIR = .obj

SRCS = Harl.cpp main.cpp
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

HEADERS = Harl.hpp

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "Compiled!"

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS) $(OBJ_DIR)
	@echo "Removed object files"

fclean: clean
	@rm -rf $(NAME)
	@echo "Removed executable"

re: fclean all

.PHONY: all clean fclean re