#include <string.h>
#include <stdlib.h>
#include "libbrwd.h"

char	*brwd_strjoin(char const *s1, char const *s2)
{	
	char	*res;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (res == NULL)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		res[i + k] = s2[k];
		k++;
	}
	res[i + k] = '\0';
	return (res);
}