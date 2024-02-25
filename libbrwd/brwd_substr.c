#include "libbrwd.h"
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>

char	*brwd_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	i = 0;
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	if (start <= strlen(s))
	{
		while (i < len && s[i + start])
		{
			res[i] = s[i + start];
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}
