/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:52:44 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/02 23:07:43 by jponieck         ###   ########.fr       */
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
	int c = ft_atoi(argv[2]);
	int mode = ft_atoi(argv[3]);
	char *r;
	if (mode == 1)
		r = strrchr(src, c);
	else
		r = ft_strrchr(src, c);

	printf("%s ", r);
}	
	
