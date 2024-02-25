CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libbrwd.a

SRC_FILES = brwd_putnbr_fd.c brwd_putendl_fd.c brwd_putstr_fd.c brwd_putchar_fd.c brwd_striteri.c brwd_strmapi.c brwd_itoa.c brwd_split.c brwd_strtrim.c brwd_substr.c brwd_strjoin.c
SRC_FILES_BONUS = ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ_FILES_BONUS = $(SRC_FILES_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

bonus: $(OBJ_FILES) $(OBJ_FILES_BONUS)
	ar rcs $(NAME) $(OBJ_FILES) $(OBJ_FILES_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ_FILES) $(OBJ_FILES_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

