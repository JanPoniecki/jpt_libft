#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include "libbrwd/libbrwd.h"

int	main(int argc, char **argv)
{
	int	input;

	input = ft_atoi(argv[1]);
	if (argv[2][0] == '1')
		brwd_putnbr_fd(input, 1);
	else
		ft_putnbr_fd(input, 1);
}