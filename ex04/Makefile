NAME = notsed

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Compiled!"

clean:
	@rm -rf $(NAME)

re: clean all

val: all
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME)

.PHONY: all clean fclean re val