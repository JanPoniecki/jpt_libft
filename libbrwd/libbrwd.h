#ifndef LIBBRWD_H
# define LIBBRWD_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	*brwd_strtrim(char const *s1, char const *set);
void	brwd_striteri(char *s, void (*f)(unsigned int, char *));
char	*brwd_substr(char const *s, unsigned int start, size_t len);
char	*brwd_strjoin(char const *s1, char const *s2);
char	**brwd_split(char const *s, char c);
char	*brwd_itoa(int n);
char	*brwd_strmapi(char const *s, char (*f)(unsigned int, char));
void	brwd_putchar_fd(char c, int fd);
void	brwd_putstr_fd(char *s, int fd);
void	brwd_putendl_fd(char *s, int fd);
void	brwd_putnbr_fd(int n, int fd);
#endif
