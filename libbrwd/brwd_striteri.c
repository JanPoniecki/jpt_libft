#include <string.h>
#include "libbrwd.h"

void	brwd_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	len;

	if (!s || !f)
		return ;
	i = 0;
	len = strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}