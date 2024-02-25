#include <stdio.h> 
#include "libft.h" 
#include "libbrwd/libbrwd.h" 

char *empty = "";
char *nll = NULL;

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
	char c = argv[2][0];
	char **res;

	if (ft_atoi(argv[3]) == 1)
		res = brwd_split(src, c);
	else
		res = ft_split(src, c);
	int i = 0;
	while (res[i])
	{
		printf("%s,", res[i]);
		free(res[i]);
		i++;
	}
	printf("%p\n", res[i]);
	free(res);
}
