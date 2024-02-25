#include <stdio.h> 
#include "libft.h" 
#include "libbrwd/libbrwd.h" 

char *empty = "";
char *nll = NULL;

char	code_me(unsigned int i, char c)
{
	int divider = (c - 32 + i) / 95;
	char code = (c - 32 + i) - (divider * 95) + 32;
	return (code);
}

char *test_arg(char *str)
{
	if (ft_strncmp(str, "EMPTY", 6) == 0)
		return (empty);
	else if(ft_strncmp(str, "NULL", 6) == 0)
		return (nll);
	else
	{
		int i = 0;
		while (str[i])
		{
			str[i] = (str[i] == '@' ? 0 : str[i]);
			i++;
		}
		return (str);
	}
}

int	main(int argc, char **argv)
{
	char *src = test_arg(argv[1]);
	int mode = ft_atoi(argv[2]);
	char *r;
	if (mode == 1)
		r = brwd_strmapi(src, &code_me);
	else
		r = ft_strmapi(src, &code_me);
	printf("%s ", r);
	free(r);
}