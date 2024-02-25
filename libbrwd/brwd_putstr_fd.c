#include "libbrwd.h"

void	brwd_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
		return ;
	i = 0;
	while (s[i])
		brwd_putchar_fd(s[i++], fd);
}