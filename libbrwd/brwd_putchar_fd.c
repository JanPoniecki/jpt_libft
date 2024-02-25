#include "libbrwd.h"

void	brwd_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}