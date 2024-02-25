/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:57:44 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/03 11:14:27 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h> 
#include "libft.h" 

char *empty = "";
char *nll = NULL;

char *test_arg(char *str)
{
	if (ft_strncmp(str, "EMPTY", 6) == 0)
		return (empty);
	else if(ft_strncmp(str, "NULL", 6) == 0)
		return (nll);
	else
	{
		int i = 0;
		while (str[i])
		{
			str[i] = (str[i] == '@' ? 0 : str[i]);
			i++;
		}
		return (str);
	}
}

int	main(int argc, char **argv)
{
	int size = ft_atoi(argv[1]);
	int position = ft_atoi(argv[2]);
	char *src = (char *)malloc(size);
	int c = ft_atoi(argv[3]);
	int mode = ft_atoi(argv[4]);

	ft_bzero(src, size);
	src[position] = c;
	src[position + 1] = '!';

	char *r;
	if (mode == 1)
		r = (char *)memchr(src, c, size); 
	else
		r = (char *)ft_memchr(src, c, size); 

	printf("%s ", r);
	free(src);
}	
	
