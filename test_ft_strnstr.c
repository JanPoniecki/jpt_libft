/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:52:44 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/03 19:20:32 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h> 
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
	char *big = test_arg(argv[1]);
	char *small = test_arg(argv[2]);
	int size = ft_atoi(argv[3]);
	int mode = ft_atoi(argv[4]);
	char *r;
	if (mode == 1)
		r = strnstr(big, small, size);
	else
		r = ft_strnstr(big, small, size);
	printf("%s ", r);
}	
	
