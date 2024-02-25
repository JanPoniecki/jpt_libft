/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:52:44 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/02 23:43:47 by jponieck         ###   ########.fr       */
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
	char *str1 = test_arg(argv[1]);
	char *str2 = test_arg(argv[2]);
	int size = ft_atoi(argv[3]);
	int mode = ft_atoi(argv[4]);
	int r;
	if (mode == 1)
		r = strncmp(str1, str2, size);
	else
		r = ft_strncmp(str1, str2, size);

	printf("%d ", r);
}	
	
