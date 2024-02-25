/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:07:37 by nshahid           #+#    #+#             */
/*   Updated: 2024/02/04 19:17:34 by jponieck         ###   ########.fr       */
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
	char *src = test_arg(argv[1]);
	char *dst;  

	if (ft_atoi(argv[2]) == 1)
		dst = strdup(src);
	else
		dst = ft_strdup(src);

	printf("%s", dst);
	free(dst);
}	
	
