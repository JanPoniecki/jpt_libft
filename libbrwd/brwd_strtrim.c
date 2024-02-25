#include "libbrwd.h"
#include <stdlib.h>
#include <string.h>

char	*brwd_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	end;
	size_t	start;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = strlen(s1);
	while (strchr(set, s1[start]) && s1[start])
		start++;
	while (strchr(set, s1[end]) && end > start)
		end--;
	new = brwd_substr(s1, start, (end - start) + 1);
	if (!new)
		return (NULL);
	return (new);
}