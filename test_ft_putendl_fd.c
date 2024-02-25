#include <stdio.h>
#include <ctype.h>
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
	char	*input;

	input = test_arg(argv[1]);
	if (argv[2][0] == '1')
		brwd_putendl_fd(input, 1);
	else
		ft_putendl_fd(input, 1);
}
