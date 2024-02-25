#include "libbrwd.h"

static char	ft_tochar(int c)
{
	if (c >= 0 && c <= 9)
		return (c + '0');
	return (c);
}

void	brwd_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (fd < 0)
		return ;
	if (num < 0)
	{
		brwd_putchar_fd('-', fd);
		num = -num;
	}
	if (num < 10)
		brwd_putchar_fd(ft_tochar(num), fd);
	else
	{
		brwd_putnbr_fd(num / 10, fd);
		brwd_putchar_fd(ft_tochar(num % 10), fd);
	}
}