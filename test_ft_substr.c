/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:52:44 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/05 20:16:38 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include "libft.h" 
#include "libbrwd/libbrwd.h" 

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
	char *src = test_arg(argv[1]);
	int start = ft_atoi(argv[2]);
	int size = ft_atoi(argv[3]);	
	int mode = ft_atoi(argv[4]);
	char *r;
	if (mode == 1)
		r = brwd_substr(src, start, size);
	else
		r = ft_substr(src, start, size);
	printf("%s ", r);
	free(r);
}	
	
