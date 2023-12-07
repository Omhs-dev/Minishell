# NAME = minishell

# SRCS = main.c garbage_collector/garbage_collector.c

# RM = rm -f

# INCS	= -I ./include/

# CC = gcc

# FLAGS = -Wall -Wextra -Werror -L/usr/include/   #-fsanitize=address

# OBJS = $(SRCS:.c=.o)

# OBJ_B = $(SRC_B:.c=.o)

# $(NAME):	$(OBJS)
# 		@${CC} $(FLAGS) $(SRCS) -o ${NAME} -lreadline -lncurses

# all: $(NAME)

# bonus: $(NAME)

# clean:
# 		@$(RM) $(OBJS) $(OBJ_B)

# fclean: clean
# 		$(RM) $(NAME) $(BONUS_NAME)

# re: fclean all





NAME = minishell

LIBFT = lib/libft_sub/libft.a

LIBFT_PATH = "lib/libft_sub/"

SRCS =  main.c garbage_collector/garbage_collector.c signals/signals.c \
		builtins/builtins.c builtins/ft_echo.c

RM = rm -f

INCS	= -I ./include/

CC = gcc

FLAGS = -Wall -Wextra -Werror -L/usr/include/

OBJS = $(SRCS:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

$(NAME):	$(OBJS)
		@make -C $(LIBFT_PATH)
		@${CC} $(FLAGS) $(SRCS) $(LIBFT) -o ${NAME} -lreadline -lncurses
# $(BONUS_NAME) : $(OBJ_B)
# 		@${CC} $(FLAGS) $(SRC_B) -o checker

all: $(NAME)

bonus: $(NAME)

clean:
		@$(RM) $(OBJS) $(OBJ_B)

fclean: clean
		$(RM) $(NAME) $(BONUS_NAME)

re: fclean all


.PHONY : all clean fclean re bonus