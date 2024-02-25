/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:05:34 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/01 22:10:12 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <strings.h> 
#include <unistd.h> 
#include "libft.h" 

char *empty = "";
char *nll = NULL;

void printmem(char *src, int size)
{
	int i = 0;
	while (i < size)
		write(1, &src[i], 1), i++;
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
	int size = ft_atoi(argv[1]);

	char *src = (char *)malloc(size + 5);
	ft_memset(src, 42, size + 5);
	if (ft_atoi(argv[2]) == 1)
		bzero(src, size);
	else
		ft_bzero(src, size);
	printmem(src, size + 5);
	free(src);
}	
	
