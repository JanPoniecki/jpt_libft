/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:36:05 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/03 11:37:30 by jponieck         ###   ########.fr       */
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
		printf("%c ", src[i++]);
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
	int mem_1 = ft_atoi(argv[1]);
	char *mem_2 = test_arg(argv[2]);
	int size = ft_atoi(argv[3]);
	int mode = ft_atoi(argv[4]);
	int r;

	if (mode == 1)
		r = memcmp(&mem_1, mem_2, size);
	else
		r = ft_memcmp(&mem_1, mem_2, size);
	printf("%d ", r);
}	
	
