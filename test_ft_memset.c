/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:57:08 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/01 21:17:14 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 
#include <unistd.h> 
#include "libft.h" 

char *empty = "";
char *nll = NULL;

void printmem(char *src, int size)
{
	int i = 0;
	while (i < size)
		printf("%d,", src[i]), i++;
}

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
	char *src = (char *)malloc(50);
	if (ft_atoi(argv[3]) == 1)
		memset(src, ft_atoi(argv[1]), ft_atoi(argv[2]));
	else
		ft_memset(src, ft_atoi(argv[1]), ft_atoi(argv[2]));
	printmem(src, 50);
	free(src);
}
