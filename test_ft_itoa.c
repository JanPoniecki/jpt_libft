#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include "libbrwd/libbrwd.h"

int	main(int argc, char **argv)
{
	int nb = ft_atoi(argv[1]);
	int mode = ft_atoi(argv[2]);
	char *result;

	if (mode == '1')
		result = brwd_itoa(nb);
	else
		result = ft_itoa(nb);
	printf("%s\n", result);
	free(result);
}
