#include <stdio.h> 
#include "libft.h" 
#include "libbrwd/libbrwd.h" 

char *empty = "";
char *nll = NULL;

void	code_it(unsigned int i, char *c)
{
	char	code;
	int		divider;

	divider = (*c - 32 + i) / 95;
	code = (*c - 32 + i) - (divider * 95) + 32;
	*c = code;
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
	if (mode == 1)
		brwd_striteri(src, &code_it);
	else
		ft_striteri(src, &code_it);
	printf("%s ", src);
}