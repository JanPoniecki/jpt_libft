CC = gcc
NAME = test.out

all:
	cp ../libft/libft.a ./libft.a
	cp ../libft/libft.h ./libft.h

run:
	python3 ./test.py s $(fun)

run_d:
	python3 ./test.py d $(fun) 

ft_isalpha:
	gcc -o $(NAME) test_ft_isalpha.c -I. -L. -lft -lbsd

ft_isdigit:	
	gcc -o $(NAME) test_ft_isdigit.c -I. -L. -lft -lbsd

ft_isalnum:	
	gcc -o $(NAME) test_ft_isalnum.c -I. -L. -lft -lbsd
	
ft_isascii:	
	gcc -o $(NAME) test_ft_isascii.c -I. -L. -lft -lbsd

ft_isprint:	
	gcc -o $(NAME) test_ft_isprint.c -I. -L. -lft -lbsd

ft_strlen:
	gcc -o $(NAME) test_ft_strlen.c -I. -L. -lft -lbsd

ft_memset:
	gcc -o $(NAME) test_ft_memset.c -I. -L. -lft -lbsd

ft_bzero:
	gcc -o $(NAME) test_ft_bzero.c -I. -L. -lft -lbsd

ft_memcpy:
	gcc -o $(NAME) test_ft_memcpy.c -I. -L. -lft -lbsd

ft_memmove:
	gcc -o $(NAME) test_ft_memmove.c -I. -L. -lft -lbsd

ft_strlcpy:
	gcc -o $(NAME) test_ft_strlcpy.c -I. -L. -lft -lbsd

ft_strlcat:
	gcc -o $(NAME) test_ft_strlcat.c -I. -L. -lft -lbsd

ft_toupper:
	gcc -o $(NAME) test_ft_toupper.c -I. -L. -lft -lbsd

ft_tolower:
	gcc -o $(NAME) test_ft_tolower.c -I. -L. -lft -lbsd

ft_strchr:
	gcc -o $(NAME) test_ft_strchr.c -I. -L. -lft -lbsd

ft_strrchr:
	gcc -o $(NAME) test_ft_strrchr.c -I. -L. -lft -lbsd

ft_strncmp:
	gcc -o $(NAME) test_ft_strncmp.c -I. -L. -lft -lbsd

ft_memchr:
	gcc -o $(NAME) test_ft_memchr.c -I. -L. -lft -lbsd

ft_memcmp:
	gcc -o $(NAME) test_ft_memcmp.c -I. -L. -lft -lbsd

ft_strnstr:
	gcc -o $(NAME) test_ft_strnstr.c -I. -L. -lft -lbsd

ft_atoi:
	gcc -o $(NAME) test_ft_atoi.c -I. -L. -lft -lbsd

ft_calloc:
	gcc -o $(NAME) test_ft_calloc.c -I. -L. -lft -lbsd

ft_strdup:
	gcc -o $(NAME) test_ft_strdup.c -I. -L. -lft -lbsd

ft_substr:
	gcc -o $(NAME) test_ft_substr.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_strjoin:
	gcc -o $(NAME) test_ft_strjoin.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_strtrim:
	gcc -o $(NAME) test_ft_strtrim.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_split:
	gcc -o $(NAME) test_ft_split.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_itoa:
	gcc -o $(NAME) test_ft_itoa.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_strmapi:
	gcc -o $(NAME) test_ft_strmapi.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_striteri:
	gcc -o $(NAME) test_ft_striteri.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_putchar_fd:
	gcc -o $(NAME) test_ft_putchar.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_putstr_fd:
	gcc -o $(NAME) test_ft_putstr_fd.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_putendl_fd:
	gcc -o $(NAME) test_ft_putendl_fd.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

ft_putnbr_fd:
	gcc -o $(NAME) test_ft_putnbr_fd.c -I. -L. -L./libbrwd -lft -lbsd -lbrwd

clean_temp:
	rm -f *~

clean:
	rm -f $(NAME)

