#include "libbrwd.h"

void	brwd_putendl_fd(char *s, int fd)
{	
	if (fd < 0)
		return ;
	if (s)
		brwd_putstr_fd(s, fd);
	brwd_putchar_fd('\n', fd);
}